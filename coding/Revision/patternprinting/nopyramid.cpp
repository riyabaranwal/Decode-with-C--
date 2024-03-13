#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    
    for(int i=1;i<=r;i++){
        for(int j=r-i;j>=1;j--){
            cout<<" ";
        }
      
        for(int k=1;k<=i;k++){
            cout<<k;
        }
         for(int q=i-1;q>=1;q--){
            cout<<q;
        }

        cout<<endl;
    }
}