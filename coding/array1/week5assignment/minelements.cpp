// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. of elements : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements : ";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int min=INT_MAX;
//     for(int i=0;i<=n-1;i++){
//         if(min>arr[i]) min=arr[i];
//     }
    
//     cout<<"minimum : "<<min;
// }
#include<iostream>
#include<climits>
using namespace std;
void minimum(int a[] , int n){
    int min=INT_MAX,arr[n];
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<min;
    return;
}
int main(){
    int n,min;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    minimum(arr,n);
   
    
}