// #include<iostream>
// using namespace std;
// void display(int a[]){
//     for(int i=0;i<=4;i++){
//     cout<<a[i]<<" ";
//     }
// }

// void change(int b[]){
//     b[0]=100;
//     cout<<endl;
// }
// int main(){
//     int arr[5]={1,2,4,6,8};
//     display(arr);
//     change(arr);
//     display(arr);
// }
#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=size-1;i++){
    cout<<a[i]<<" ";
    }
}

void change(int b[],int size){
    b[0]=100;
    cout<<endl;
}
int main(){
    int arr[]={1,2,4,6,8};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}
