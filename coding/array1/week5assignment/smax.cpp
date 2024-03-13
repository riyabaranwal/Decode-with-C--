#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
     int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
        smax=max;
         max=arr[i];
        }
         else if(max!=arr[i] && smax<arr[i]){ 
        smax=arr[i];
        }
    
    }
     cout<<"smax : "<<smax;
}
