/*
Problem: 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium

Approach:
- Find the length of the linked list.
- Move to the start of the second half.
- Reverse the second half of the list.
- Traverse the first half and reversed second half together.
- Compute the twin sum for each pair and keep track of the maximum.

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

int pairSum(struct ListNode* head) {

    struct ListNode* curr = head;
    struct ListNode* next = NULL;
    struct ListNode* prev = NULL;

    int length = 0;

    while(curr != NULL){
        length++;
        curr = curr->next;
    }

    curr = head;

    int half = length / 2;

    while(half > 0){
        curr = curr->next;
        half--;
    }

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    curr = head;

    int maxSum = 0;

    while(prev != NULL){

        int twinSum = curr->val + prev->val;

        if(twinSum > maxSum){
            maxSum = twinSum;
        }

        curr = curr->next;
        prev = prev->next;
    }

    return maxSum;
}
