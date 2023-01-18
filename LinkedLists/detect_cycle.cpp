/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    if (head == NULL) 
        return false;
    
    Node *slow = head;
    Node *fast = head->next;
    
    while (fast != NULL && fast->next != NULL)
    {
        if (fast == slow) return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return false;
}