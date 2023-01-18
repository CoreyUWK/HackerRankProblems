// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

void createNode(SinglyLinkedListNode** node, int data) {
        *node = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
        (*node)->data = data;
        (*node)->next=NULL;
}

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* headPtr = head;
    SinglyLinkedListNode* prevPtr = head;
    SinglyLinkedListNode* newNode = NULL;
    if (NULL == headPtr) {
        createNode(&headPtr, data);
    }
    else {
        while (headPtr->next != NULL && position > 0) {
            --position;
            prevPtr = headPtr;
            headPtr = headPtr->next;
        } 
        createNode(&newNode, data);
        prevPtr->next = newNode;
        newNode->next = headPtr;
    }
    return head;
}