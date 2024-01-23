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
void show(){
    cout<<"mai a ka show hu"<<endl;
}
  
};
class B:public A//A aur B mein koi relation nhi hai
{
    public: 
    int b_ka_public;
    void show(){//overwrite hua aur saath mein print statement bhi change hua
        cout<<"mai b ka show hu"<<endl;
    }

   
};

int main()
{
    A a;
    B b;
    a.show();
    b.show();
    b.A::show();//A aur resolution operator use karke A waala print statement call hua
  
}