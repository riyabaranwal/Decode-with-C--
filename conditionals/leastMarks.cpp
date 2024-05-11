// If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.
#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"Enter the marks obtained by A : ";
    cin>>a;
    cout<<"Enter the marks obtained by B : ";
    cin>>b;
    cout<<"Enter the marks obtained by C : ";
    cin>>c;
    if(a<b && a<c){
        cout<<"A scored least marks";
    }
    else if(b<a && b<c){
        cout<<"B scored least marks";
    }
    else{
        cout<<"C scored least marks";
    }
}