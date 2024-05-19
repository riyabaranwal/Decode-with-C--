#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsetAtEnd(Node *head, int val)
{
    Node *temp = new Node(val);
    int size = 0;
   // if (size == 0) temp = head; because isme bodes already bane hue h toh ye condition valid nhi h.
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = temp;
    //size++;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    InsetAtEnd(a, 100);
    display(a);
}