class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        if(head==NULL || head->next==NULL) return head;
            ListNode* Temp = head;
            ListNode* Tail = NULL;
            while(Temp!= NULL){
                if(Temp->next == NULL) Tail = Temp;
                    Temp = Temp->next;
                    n++;
            }
            k = k%n;
            if(k==0) return head;
             Temp = head;
            for(int i = 1 ; i< n-k ; i++){
                Temp=Temp->next;
            }
            Tail->next = head;
            head = Temp->next;
            Temp->next = NULL;
            return head;
    }
};