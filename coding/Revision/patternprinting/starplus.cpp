#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    
    for(int i=1;i<=r;i++){
        for(int k=1;k<=r;k++){
            if(i==3 || k==3)
            cout<<'*';
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
}