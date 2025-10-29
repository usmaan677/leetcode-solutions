class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if(list1 == nullptr){
                return list2;
            }
            if(list2==nullptr){
                return list1;
            }
            ListNode* dummy = new ListNode(0);
            ListNode* cu = dummy;
    
            while(list1!= nullptr && list2!=nullptr){
                if(list1->val>list2->val){
                    ListNode* temp = new ListNode(list2->val);
                    list2 = list2->next;
                    cu->next = temp;
                }else{
                    ListNode* temp = new ListNode(list1->val);
                    list1=list1->next;
                    cu->next = temp;
                }
                cu = cu->next;
            }
    
            if(list1==nullptr){
                cu->next = list2;
            }else{
                cu->next = list1;
            }
    
            return dummy->next;
        }
    };