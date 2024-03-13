#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r+1-i;j++){
        cout<<"*";
        }
        cout<<endl;
    }
    
}
// #include<iostream>
// using namespace std;
// int main(){
//     int r,c;
//     cout<<"Enter no. of rows : ";
//     cin>>r;
//     for(int i=r;i>=1;i--){
//         for(int j=i;j>=1;j--){
//         cout<<" ";
//         }
//         cout<<endl;
//     }
    
// }