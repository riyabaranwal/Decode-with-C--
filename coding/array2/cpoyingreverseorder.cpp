#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
cout<<"Enter elements :";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        a.push_back(q);
    }
}
int main(){
    vector<int>v1;
    
    display(v1);
     vector<int>v2(v1.size());
   for(int i=0;i<=v2.size()-1;i++){
        int j=v2.size()-1-i;
      v2[i]=v1[j];
      cout<<v2[i];
    }
    
}