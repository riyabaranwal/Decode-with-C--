#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    int arr[n],sum=0;
    cout<<"Enter the elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    cout<<"sum : "<<sum;
}