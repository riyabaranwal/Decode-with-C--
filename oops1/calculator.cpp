#include<iostream>
using namespace std;
class calculator{
    public:
    int a;
    int b;
    void add(){
        cout<<a+b<<endl;
    }

    void subtract(){
        cout<<a-b<<endl;
    }
};
int main(){
    calculator calci;
    calci.a=2;
    calci.b=1;
    calci.add();
    calci.subtract();
}