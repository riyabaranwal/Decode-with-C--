#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    
    for(int i=1;i<=2*r-1;i++){
        cout<<i;
     }
     cout<<endl;
     for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        int a=5;
        for(int j=1;j<=r-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
     }
}