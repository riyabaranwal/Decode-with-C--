#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node *next;
        Node(int value){
            this->value=value;
            this->next=next;
        }
};
int main(){
    Node a(4);
    Node b(5);
    Node c(6);
    a.next=&b;
    b.next=&c;
    //b ka use karke b ka value print karana
    cout<<b.value<<endl;
    //bina b ka use kiye b ka value print karana 
    cout<<a.next->value<<endl;
    cout<<((a.next)->next)->value<<endl;
}