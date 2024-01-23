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

protected:
    A()
    {
        cout << " a ka constructor call hua"<<endl;
    }
};
class B : public A
{ // class B child hai class A ka aur public means this class is public therefore we can write private and protected as well but in this case we cannot aacess anything from outside
public:
    int b_ka_public;
    void show()
    {
        cout << a_ka_protected; // can be inherited
    }
    B()
    {
        cout << " b ka constructor call hua"<<endl;
    }
};
class C : protected B
{
public:
    int c_ka_public;
    void show()
    {
        cout << b_ka_public;
    }
    C()
    {
        cout << " c ka constructor call hua";
    }
};
int main()
{
    C c;/*c ka object create hua mtlb ki constructor call hoga c ka par kyonki c b ka child h , b ka constructor
    call hoga aur kyonki b , a ka child h toh A ka bhi constructor call hoga , aur parents ka pehle hoga phir 
    child ka hoga i.e 1. A ka hoga ,2. B ka hoga , 3. C ka hoga  */
}