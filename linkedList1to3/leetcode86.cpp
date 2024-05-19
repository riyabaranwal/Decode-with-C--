class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* a = head;
        ListNode* p = new ListNode(100);
        if(head == NULL || head->next == NULL) return head;
        while(a->val <= x){
            if(a->val < x){
            p->val = a->val;
            a = a->next;
            p = p->next;
            }
            // return p;
        }
        p->next = a;
        p = p->next;
        a = a->next;
        return p;
    }
};