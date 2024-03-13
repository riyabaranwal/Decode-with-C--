#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    int a=1;
    for(int i=1;i<=r;i++){
        for(int k=1;k<=i;k++){
            cout<<a;
                  a++;
        }

        cout<<endl;
    }
}