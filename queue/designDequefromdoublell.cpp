#include <iostream>
#include<deque>
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

class Deque
{
public:
    Node *head;
    Node *tail;
    int s;
    Deque()
    {
        head = tail = NULL;
        s = 0;
    }
    void PushBack(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail->prev = tail;
            tail = temp;
        }
        s++;
    }
    void PushFront(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
    }
  
    void popFront()
    {
        if (s == 0){
            cout << "Empty";
        return;
        }
        Node* temp = head;
        head = head->next;
        if(head) head->prev = NULL;
        if(head == NULL) tail=NULL;
        delete temp;
        s--;
    }
    void popBack()
    {
        if (s == 0){
            cout << "Empty";
            return;
        }
        else if(s == 1){
            popFront();
            return;
        }
          Node* temp = tail->prev;
    temp->next = NULL;
            tail = temp;
            s--;
    }
   
    int front(){
    if(s == 0){
        cout<<"Queue is empty";
        return -1;
    }
    return head->val;
   }

    int back(){
    if(s == 0){
        cout<<"Queue is empty";
        return -1;
    }
    return tail->val;
   }
   int size(){
        return s;
    }
    bool empty(){
        if(s == 0) return true;
        else return false;
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
   Deque dq;
   dq.PushBack(10);
   dq.PushBack(20);
   dq.PushBack(30);
   dq.PushBack(40);
   dq.display();
   dq.popBack();
   dq.display();
  
}