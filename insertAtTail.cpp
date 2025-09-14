SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode * temp = new SinglyLinkedListNode(data);
    
    SinglyLinkedListNode * tmp1 = head;
    if (head == nullptr){
        head = temp;
        return head;
    }
    while(tmp1 ->next != nullptr){
        tmp1 = tmp1->next;
    }
    tmp1->next = temp;
    return head;
    

}