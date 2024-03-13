// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,4,5,6,7};
//     // int* ptr=arr;
//     int* ptr=&arr[0];
//     cout<<ptr<<endl;
//     for(int i=0;i<4;i++){
//         cout<<ptr[i];
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,5,6,7};
    
    int* ptr=&arr[0];
    cout<<ptr<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr=arr;
    *ptr=2;//first element
    ptr++;
    *ptr=9;//second element
    ptr--;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
         ptr++;
    }
}
