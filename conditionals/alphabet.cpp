//  Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"character : ";
    cin>>ch;
    if(((int)ch>=65 && (int)ch<=90) || (int)ch>=97 && (int)ch<=122){
        cout<<"Alphabets";
    }
    else if((int)ch > 48 && (int)ch < 57){
        cout<<"digits";
    }
    else{
        cout<<"special character";
    }

}