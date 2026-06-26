/*
Problem: 876. Middle of the Linked List
Difficulty: Easy

Approach:
- Use two pointers:
  1. A slow pointer that moves one node at a time.
  2. A fast pointer that moves two nodes at a time.
- When the fast pointer reaches the end of the list,
  the slow pointer will be at the middle node.
- Return the slow pointer.

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

struct ListNode* middleNode(struct ListNode* head) {

    struct ListNode* curr = head;
    struct ListNode* fast = head;

    while(fast != NULL && fast->next != NULL){
        curr = curr->next;
        fast = fast->next->next;
    }

    return curr;
}
