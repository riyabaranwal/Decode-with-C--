#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    
    for(int i=1;i<=r;i++){
        int a=1,b=5;
        for(int k=1;k<=r;k++){
            if(i==k ||i+k==r+1)
            cout<<'*';
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
}