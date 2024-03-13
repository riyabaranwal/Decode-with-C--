#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the elements you want to search : ";
    cin>>x;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            cout<<"present";
            break;
        }
        else{
            cout<<"not present";
            break;
        }
    }
  

}