/*
Problem: 328. Odd Even Linked List
Difficulty: Medium

Approach:
- Maintain two separate lists:
  1. Odd-positioned nodes.
  2. Even-positioned nodes.
- Use two pointers to traverse the odd and even lists simultaneously.
- Relink odd nodes together and even nodes together.
- Save the head of the even list before rearranging.
- Attach the even list to the end of the odd list.
- Return the modified head.

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

struct ListNode* oddEvenList(struct ListNode* head) {

    if(head == NULL || head->next == NULL){
        return head;
    }

    struct ListNode* curr1 = head;
    struct ListNode* curr2 = head->next;
    struct ListNode* evenHead = curr2;

    while(curr2 != NULL && curr2->next != NULL){

        curr1->next = curr2->next;
        curr1 = curr1->next;

        curr2->next = curr1->next;
        curr2 = curr2->next;
    }

    curr1->next = evenHead;

    return head;
}
