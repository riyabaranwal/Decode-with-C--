#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int x;
    cout<<"Enter target : ";
    cin>>x;
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    cout<<"Enter elements :";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    
    for(int i=0;i<=v.size()-1;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}