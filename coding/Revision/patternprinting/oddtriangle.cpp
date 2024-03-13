#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    
    for(int i=1;i<=r;i++){
        for(int j=r-i;j>=1;j--){
            cout<<" ";
        }
        int a=1;
        for(int k=1;k<=i;k++){
            cout<<a;
            a=a+2;
        }

        cout<<endl;
    }
}