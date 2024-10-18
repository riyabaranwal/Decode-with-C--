#include<iostream>
using namespace std;
#include<string>
int main(){
    char str[] = {'a','b','c','d','e','f','\0'};
    cout<<str<<endl;
    for(int i = 0 ; str[i] != '\0' ; i++){
        cout<<str[i]<<" ";
    }
}