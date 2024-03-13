// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=b;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=c;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
   
// }
#include<iostream>
using namespace std;
char tri(int x){
int n;
cin>>n;
 for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
 }
}
int main(){
    int a,b,c;
    tri(a);
    tri(b);
    tri(c);
}


