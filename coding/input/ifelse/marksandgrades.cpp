#include<iostream>
using namespace std;
int main(){
    float n ;
    cout<<"Enter marks : ";
    cin>>n;
    if(n>=91){
        cout<<"Excellent";
    }
    else if(n>=81){
        cout<<"Very good";
    }
    else if(n>=71){
        cout<<"Good";
    }
    else if(n>=61){
        cout<<"can do better";//when using else if uper wale saare conditions fail ho jaate h therefore not required to put ||, && conditions.
    }
    else if(n>=51){
        cout<<"average";
    }
    else if(n>=40){
        cout<<"Below average";
    }
    else if(n<40){
        cout<<"Fail";
    }
}