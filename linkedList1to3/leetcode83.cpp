class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode* a = head;
         ListNode* b = head->next;
         if(head == NULL || head->next == NULL) return head;
         while(b!=NULL){
         if(a->val == b->val){
            b = b->next;
         }
         a->next = b;
         a = b;
        if(b!=NULL) b = b->next;
  
    }
        return head;
    }

};