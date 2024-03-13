#include<iostream>
using namespace std;
int main(){
    char chh;
    cout<<"Enter character : ";
    cin>>chh;
    int ch = (int)chh;
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"character is vowel";
        }
        else{
            cout<<"character is consonant";
        }
    }
    else{
        cout<<"Not an alphabet";
    } 
}
