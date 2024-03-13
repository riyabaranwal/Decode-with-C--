#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<=a.size()-1;i++){
       cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart1(int p, int r,vector<int>&b){
    for(int i=p,j=r;i<=j;i++,j--){
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;
    }
}
int main(){
    vector<int>v1;
     int n,k;
     cout<<"Enter k : ";
     cin>>k;
    cout<<"Enter no. of elements : ";
    cin>>n;
cout<<"Enter elements :";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }
    display(v1);
    reversepart1(0,n-k-1,v1);
    reversepart1(n-k,n-1,v1);
    
    display(v1);
    reversepart1(0,n-1,v1);
    display(v1);
}

