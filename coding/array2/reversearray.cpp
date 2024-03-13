#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
}
cout<<endl;
}
void reverse(vector<int>&b){
    for(int i=0,j=b.size()-1;i<=j;i++,j--){
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;
    }
}
int main(){
    vector<int>v1;
     int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
cout<<"Enter elements :";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }
    display(v1);
    reverse(v1);
    display(v1); 
    
}