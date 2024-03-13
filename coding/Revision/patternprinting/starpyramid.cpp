#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    int nsp=r-1;
    int nst=1;
    for(int i=1;i<=r;i++){
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp--;
       for(int j=1;j<=nst;j++){
        cout<<'*';
       }
       nst=nst+2;
        cout<<endl;
    }
}