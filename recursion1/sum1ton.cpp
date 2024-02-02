#include<iostream>
using namespace std;
int sum(int s,int n,int i){
    if(i>n) {
        return s;
    }
    return sum(s+i,n,i+1);
}
int sum2(int n){
    if(n==0) return 0;
    else{
        return n+sum2(n-1);
    }
}
void sum3(int sum , int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum3(sum+n,n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
   //cout<< sum(0,n,1);
   //cout<<sum2(10);
   sum3(0,n);
}