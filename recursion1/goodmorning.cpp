#include<iostream>
using namespace std;
void goodMorning(int a){
    if(a>=1){
    cout<<"goodMorning"<<endl;
    goodMorning(a-1);
    }
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    goodMorning(n);
}