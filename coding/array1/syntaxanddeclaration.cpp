// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7];
//      arr[0]=1;
//      arr[1]=6;
//      arr[2]=5;
//      arr[3]=3;
//      arr[4]=2;
//      arr[5]=8;
//      arr[6]=3;  
//      cout<<arr[5];
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,6,5,3,2,8,3};
//      cout<<arr[5];
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,6,5,3,2,8,3};
//      for(int i=0;i<=6;i++){
//         cout<<arr[i]<<" " ;
//      }
// }

#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,6,5,3,2,8,3};
    for(int i=0;i<=6;i++){
       cin>>arr[i] ;
     }
     for(int i=0;i<=6;i++){
        cout<<arr[i]<<" " ;
     }
}