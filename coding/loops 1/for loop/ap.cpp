// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of terms : ";
//     cin>>n;
//     for(int i=1 ; i<=2*n-1 ; i++){
//         if(i%2!=0)
//         cout<<i<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of terms : ";
    cin>>n;
    int a;
    a=1;
    for(int i=1 ; i<=n ; i++){
        cout<<a<<endl;
        a=a+2;
    }
}