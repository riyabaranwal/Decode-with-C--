#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows : ";
    cin>>r;
    // cout<<"Enter no. of columns : ";
    // cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
        cout<<"*";
        }
        cout<<endl;
    }
}
