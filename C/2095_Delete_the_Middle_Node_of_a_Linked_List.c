/*
Problem: 2095. Delete the Middle Node of a Linked List
Difficulty: Medium

Approach:
- Traverse the linked list once to determine its length.
- Compute the index of the middle node as length / 2.
- Traverse the list again until reaching the middle node, keeping track of the previous node.
- Remove the middle node by updating the previous node's next pointer.
- Return the modified head of the linked list.

Time Complexity: O(n)
Space Complexity: O(1)

Where:
n = number of nodes in the linked list
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteMiddle(struct ListNode* head) {

    if(head == NULL || head->next == NULL){
        return NULL;
    }

    int length = 0;
    struct ListNode* curr = head;

    while(curr != NULL){
        length++;
        curr = curr->next;
    }

    int mid = length / 2;

    curr = head;
    struct ListNode* prev = NULL;

    for(int i = 0; i < mid; i++){
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;

    return head;
}
