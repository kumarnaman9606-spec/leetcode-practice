/*
Author: Naman Kumar
Problem: LeetCode 2 - Add Two Numbers
Language: C

Approach:
Traverse both linked lists simultaneously and add the
corresponding digits along with any carry from the
previous step. Create a new node for each resulting
digit and append it to the answer list.

Time Complexity: O(max(m, n))
Space Complexity: O(max(m, n))
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode *tail = &dummy;

    int carry = 0;

    while(l1 != NULL || l2 != NULL || carry != 0) {

        int x = 0;
        int y = 0;

        if(l1 != NULL) {
            x = l1->val;
            l1 = l1->next;
        }

        if(l2 != NULL) {
            y = l2->val;
            l2 = l2->next;
        }

        int sum = x + y + carry;

        carry = sum / 10;

        struct ListNode *newNode =
            (struct ListNode *)malloc(sizeof(struct ListNode));

        newNode->val = sum % 10;
        newNode->next = NULL;

        tail->next = newNode;
        tail = newNode;
    }

    return dummy.next;
}
