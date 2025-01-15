#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int> >graph;
unordered_set<int>visited;
int v;//no. of vertices
void add_edge(int src , int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    } 
} 
bool dfs(int curr , int end){
    if(curr == end){
        return true;
    }
    visited.insert(curr);
    for(auto neighbour: graph[curr]){
      if(not visited.count(neighbour)){
        bool result = dfs(neighbour,end);
          if(result){
              return true;
          }
      }
    }
    return false;
}
bool anyPath(int src , int dest){
    return dfs(src,dest);
}
int main(){
    cin>>v;
    graph.resize(v, list<int>());
    int e;
    cin>>e;
    visited.clear();
    while (e--)
    {
        int src, dest;
        cin>>src>>dest;
        //add_edge(src, dest);//unweighted graph
        add_edge(src, dest,false);//weighted graph

    }
    int x,y;
    cin>>x>>y;
    cout<<anyPath(x,y)<<endl;
}