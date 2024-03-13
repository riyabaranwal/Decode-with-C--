#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows : ";
    cin>>r;

    for(int i=1;i<=r;i++){
            int a=1;
        for(int j=1;j<=i;j++){
     
             cout<<a;
             a=a+2;
        }
        cout<<endl;
    }
}
