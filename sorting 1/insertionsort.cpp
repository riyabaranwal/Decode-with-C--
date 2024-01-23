#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,-2,3,1,-9,0};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}