#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Riya Baranwal";
    cout<<str<<endl;
    cout<<str[0]<<endl;
    cout<<str.size()<<endl;
    string s;
   // cin>>s; // it will work only if the given has no spaces 
   getline(cin,s);
    cout<<s<<endl;

}