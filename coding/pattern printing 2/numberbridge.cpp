#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    int nsp=1;
    int m=n-1;
    for(int i=1;i<=m;i++){
        for(int q=1;q<=m+1-i;q++){
            cout<<q;
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp=nsp+2;
        for(int q=5;q<=m+1-i;q++){
            cout<<q;
        }
        cout<<endl;
    }
       
    
}