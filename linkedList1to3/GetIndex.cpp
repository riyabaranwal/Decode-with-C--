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
class Linkedlist
{
public:
    Node *head;
    Node *tail;
    int size;
    Linkedlist()
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
            tail = temp;
        }
        size++;
    }
    void InsertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void InsertAtIndex(int val , int idx){
        Node* temp = new Node(val);
        if(idx == 0) InsertAtHead(val);
        else if(idx == size) InsertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 0 ; i < idx-1 ; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
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
    Linkedlist ll;
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
    ll.InsertAtIndex(67,2);
    ll.display();
    cout <<"Size : "<< ll.size << endl;
   cout<<ll.getIdx(3)<<endl;
}