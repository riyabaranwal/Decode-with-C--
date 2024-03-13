#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character : ";
    cin>>c;
    int ch = (int)c;
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
       cout<<"ch is an alphabet";
    }
    else{
        cout<<"ch is not an alphabet";
    }

}