#include <iostream>
using namespace std;
class A
{
public:
    int a_ka_public;

protected:
    int a_ka_protected;

private:
    int a_ka_private;

};
class B : virtual public A
{
    public: 
    int b_ka_public;

};
class C : virtual public A
{
public:
    int c_ka_public;
    
};
class D : public B, public C
// kaayede se D ke pass a ka public do baar aayega toh ek baar aane ke liye virtual ka use hoga nhi toh humlog agar 
//  B se chahte h a ka public print karwaana ya phir a se bhi then we can use access specifier i.e B::a_ka_public
{
    public:
    void Show(){
        cout<<a_ka_public;
    }
};

int main()
{
    D d;
    d.a_ka_public=18;
    d.Show();
}