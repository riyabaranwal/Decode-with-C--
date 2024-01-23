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

public:
    A()
    {
        cout << " a ka constructor call hua" << endl;
    }
};
class B//A aur B mein koi relation nhi hai
{
    public: 
    int b_ka_public;

    B()
    {
        cout << " b ka constructor call hua" << endl;
    }
};
class C : public A, public B//C A ur B ka child hai
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
    A a;
    cout<<endl<<endl;
    B b;
    cout<<endl<<endl;
    C c;
}