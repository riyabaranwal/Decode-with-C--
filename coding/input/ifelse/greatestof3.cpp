#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter first, second and third number : "<<endl;
    cin>> n1 ;
    cin>> n2 ;
    cin>> n3 ;
     if(n1>n2 && n1>n3){
        cout<<"n1 is greatest of n2 and n3";
    }
     if(n2>n1 && n2>n3){
        cout<<"n2 is greatest of n1 and n3";
    }
     if(n3>n1 && n3>n2){
        cout<<"n3 is greatest of n1 and n2";
    }
}