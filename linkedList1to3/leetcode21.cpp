#include<iostream>
using namespace std;
class Solution {
public:
    Node* mergeTwoLists(Node* list1, Node* list2) {
        Node* temp1 = list1;
        Node* temp2 = list2;
        Node* list3 = new Node(100);
        Node* temp3 = list3;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val <= temp2->val){
                Node* t = new Node(temp1->val);
                temp3->next = t;
                temp3 = t;
                temp1 = temp1->next;
            }
            else{
                 Node* t = new Node(temp2->val);
                temp3->next = t;
                temp3 = t;
                 temp2 = temp2->next;
            }
        }
        if(temp1 == NULL){
            temp3->next = temp2;
        }
        else{
            temp3->next = temp1; 
        }
        return list3->next;
    }
};
                               //or
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode(100);
        ListNode* temp = list3;
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            }
            else{
               temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
        }
        if(list1 == NULL){
            temp->next = list2;
        }
        else{
            temp->next = list1; 
        }
        return list3->next;
    }
};