#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows : ";
    cin>>m;
    cout<<"Enter no. of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
            
        }
    }
    int max=INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]){
            max = arr[i][j];
            }
        }
}
cout<<max;
}


   int k=0;
        while(k<arr.size()-1){
            k++;
        }
        arr[k]=-1;