/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 0;
         ListNode* temp = head;
         while(temp!=NULL){
            temp = temp->next;
            size++;
         }
          ListNode* mid = head;
        for(int i = 0 ; i < (size)/2 ; i++){
             
             mid = mid->next;
        }
        return mid;
    }
};

//or
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* slow = head;
         ListNode* fast = head;
         while(fast != NULL && fast->next != NULL){
            //&& ka mtlb hota h ki first condition check karega aur agar true hua tab hi next conditon ko check karega in this case pehli condition hi false nikal gyi 
            //if for any node tem we want to check for value of temp->next then firstly check temp!=NULL 
            slow = slow->next;
            fast = fast->next->next;
         }
         return slow;
    }
};