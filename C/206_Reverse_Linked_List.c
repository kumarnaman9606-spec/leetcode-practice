/*
Problem: 206. Reverse Linked List
Difficulty: Easy

Approach:
- Use three pointers:
  1. prev - points to the previous node.
  2. curr - points to the current node.
  3. next - stores the next node before changing links.
- Reverse the link of each node one by one.
- Move all pointers forward until the end of the list.
- Return prev, which becomes the new head.

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

struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next = NULL;

    while(curr != NULL) {

        next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;
    }

    return prev;
}
