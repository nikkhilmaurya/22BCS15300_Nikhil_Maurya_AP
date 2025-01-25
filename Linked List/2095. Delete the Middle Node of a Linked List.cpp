class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr; 

        int k = 0;
        ListNode* temp = head;
        while(temp){ 
            k++;
            temp = temp->next;
        }

        int mid = k / 2; 
        ListNode* ptr = head;
        for(int i = 1; i < mid; i++) { 
            ptr = ptr->next;
        }

        ListNode* t = ptr->next;
        ptr->next = t->next;
        delete t; 

        return head;
    }
};
