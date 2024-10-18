#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "RiyaBaranwal";
// cout<<str<<endl;
//     str[1] = 'a';
//     cout<<str<<endl;
for(int i = 0 ; str[i] != '\0' ; i++){
    if(i % 2 == 0) str[i] = 'a';
}
cout<<str<<endl;

}