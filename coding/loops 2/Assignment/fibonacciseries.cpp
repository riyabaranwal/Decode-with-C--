#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,sum,n;
    cout<<"Enter no. : ";
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<b<<endl;
    }
}