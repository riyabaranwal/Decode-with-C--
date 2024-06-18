#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL
{
public:
    Node *head;
    Node *tail;
    int size;
    DLL()
    {
        head = tail = NULL;
        size = 0;
    }
    void InsertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail->prev = tail;
            tail = temp;
        }
        size++;
    }
    void InsertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void InsertAtIndex(int val, int idx)
    {
        Node *temp = new Node(val);
          if (idx < 0 || idx >= size) cout << "Invalid Index"<<endl;
        else if (idx == 0)
            InsertAtHead(val);
        else if (idx == size)
            InsertAtTail(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            t->prev = temp;
            temp->next = t;
            t->next->prev = t;
            size++;
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
            cout << "Empty";
        head = head->next;
        if(head) head->prev = NULL;
        if(head == NULL) tail=NULL;
        size--;
    }
    void deleteAtTail()
    {
        if (size == 0){
            cout << "Empty";
            return;
        }
        else if(size == 1){
            deleteAtHead();
            return;
        }
          Node* temp = tail->prev;
            temp->next = NULL;
            tail = temp;
            size--;
    }
    void deleteAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid Index";
            return;
        }
        else if (idx == 0)
            return deleteAtHead();
        else if (idx == size - 1)
           return deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx ; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }
     int getIdx(int idx){
        if(idx < 0 || idx >= size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size - 1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1 ; i <=idx ; i++ ){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
   DLL ll;
    ll.InsertAtTail(10);
    ll.display();
    ll.InsertAtTail(20);
    ll.display();
    ll.InsertAtTail(30);
    ll.display();
    ll.InsertAtTail(40);
    ll.display();
    ll.InsertAtHead(9);
    ll.display();
    ll.InsertAtIndex(67, 2);
    ll.display();
    cout << "Size : " << ll.size << endl;
    // ll.deleteAtHead();
    // ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();
}