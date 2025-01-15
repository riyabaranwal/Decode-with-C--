#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<int> >graph;
int v;//no. of vertices
void add_edge(int src , int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    } 
} 
void display(){
    for(int i = 0 ; i <graph.size() ; i++){
        cout<<i<<"->";
        for(auto el: graph[i]){
            cout<<el<<" ,";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
    graph.resize(v, list<int>());
    int e;
    cin>>e;
    while (e--)
    {
        int src, dest;
        cin>>src>>dest;
        //add_edge(src, dest);//unweighted graph
        add_edge(src, dest,false);//weighted graph

    }
    display(); 
    
}