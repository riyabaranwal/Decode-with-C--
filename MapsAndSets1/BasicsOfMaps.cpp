#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "raghav";
    p1.second = 76;
//key,freq or value
    m["Harsh"] = 15;
    m["Lokesh"] = 49;
    //   pair<string,int> p2;
    // p2.first = "harsh";
    // p2.second = 15;
    //   pair<string,int> p3;
    // p3.first = "lokesh";
    // p3.second = 49;
    m.insert(p1);
    // we can directly use auto instead of any other int , float , pair etc.....
    //for(auto p : m){}
    for(pair<string,int> p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("raghav");
     m.erase("sanket");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
     cout<<m.size();
     //in map we find for key just like sets
     //map<key,value>m
}