
 #include<iostream>
 using namespace std;
int main(){
int b,e;
    cout<<"base : ";
    cin>>b;
     cout<<"exponent : ";
     cin>>e;
     int power=1;
     for(int i=1; i<=e ; i++){
                 power=power*b;
 }
     cout<<"result : "<<power;
 }