#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows :";
    cin>>m;
    cout<<"Enter no. of columns :";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements : ";
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int t[n][m];
     for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
           t[i][j]=arr[j][i];
        }
    }
      for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
          cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}