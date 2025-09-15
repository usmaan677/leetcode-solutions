class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* curr = head;
            ListNode* next;
            ListNode* prev = nullptr;
    
            if(head == nullptr){
                return nullptr;
            }
            while(curr!= nullptr){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
    
            return prev;
            
        }
    };