#include<iostream>
using namespace std;
class A{
    public:
    int a_ka_public;//can be accessed from outside as well as from its child part i.e internally
    protected:
    int a_ka_protected;//cannot be accessed from outside but can be accessed internally
    private:
    int a_ka_private;//cannot be accessed from outside as well as cannot be accessed internally
    protected:
};
class B:public A{//class B chaild hai class A ka aur public means this class is public therefore we can write private and protected as well but in this case we cannot aacess anything from outside
    public:
    int b_ka_public;
    void show() {
        cout<<a_ka_protected;//can be inherited

}
};
int main(){
    B b;
    cout<<b.b_ka_public<<endl;
    cout<<b.a_ka_public<<endl;//protected and private cant be accesed from outside i.e b.a_ka_prpotected and b.a_ka_private is in accessible
    A a;
    cout<<a.a_ka_public;//protected and private cant be accesed from outside i.e a.a_ka_prpotected and a.a_ka_private is in accessible
}