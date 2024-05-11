#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row and column no. : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            //cout<<(char)j<<" ";
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}
