#include<iostream>
#include<stack>
using namespace std;
int main(){
     stack<int>st;
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
 cout<<endl;
 nge[n-1]=-1;
  st.push(arr[n-1]);

    for(int i = n-2 ; i>=0 ; i--){
        while(st.size()>0 && arr[i]>=st.top()){
            st.pop();
        }
        if(st.size() == 0 ) nge[i] = -1;
        else  nge[i]=st.top();
        st.push(arr[i]);
    }
   for(int i = 0 ; i < n ; i++){
        cout<<nge[i]<<" ";
     }
    // for(int i = 0 ; i < n ; i++){
    //     nge[i]=-1;
    //     for(int j = i+1 ; j < n ; j++){
    //         if(arr[j]>arr[i]){
    //         nge[i] = arr[j];
    //         break;
    //         }
    //     }
    // }
    //  for(int i = 0 ; i < n ; i++){
    //     cout<<nge[i]<<" ";
    // }
   
}