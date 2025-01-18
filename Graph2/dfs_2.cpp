// dfs for all the path
#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int> >graph;
unordered_set<int>visited;
vector<vector<int> > result;
int v;//no. of vertices
void add_edge(int src , int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    } 
} 
void dfs(int curr , int end, vector<int>&path){
    if(curr == end){
    path.push_back(curr);
    result.push_back(path);
    path.pop_back();
        return ;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour: graph[curr]){
      if(not visited.count(neighbour)){
       //cout<<neighbour<<endl;
        dfs(neighbour,end,path);
      }
    }
   path.pop_back();
   visited.erase(curr);
}

void allPath(int src , int dest){
    vector<int>path;
     dfs(src,dest,path);
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
        add_edge(src, dest);//weighted graph

    }
    int x,y;
    cin>>x>>y;
    allPath(x,y);
   // cout<<result.size()<<endl;
    for(auto path: result){
        for(auto el: path){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}