#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    
    for(int i=1;i<=2*r-1;i++){
        cout<<'*';
     }
     cout<<endl;
     for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            cout<<'*';
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        for(int j=1;j<=r-i;j++){
            cout<<'*';
        }
        cout<<endl;
     }
}
        