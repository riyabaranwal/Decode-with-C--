#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. : ";
    cin>>n;
    int a=1;
    int b=1;
    int sum;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }
    
}