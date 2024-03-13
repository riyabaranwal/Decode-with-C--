#include<iostream>
using namespace std;
int main(){
    int n,m,p,q;
    cout<<"Enter no. of rows in first array : ";
    cin>>m;
     cout<<"Enter no. of columns in first array : ";
    cin>>n;
     cout<<"Enter no. of rows in second array : ";
    cin>>p;
     cout<<"Enter no. of columns in second array : ";
    cin>>q;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int brr[p][q];
     for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }
    int res[m][q];
    if(n==p){
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j]=res[i][j]+(arr[i][k]*brr[k][j]);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                
                   cout<<res[i][j];

            }
            cout<<endl;
        }
    }
}