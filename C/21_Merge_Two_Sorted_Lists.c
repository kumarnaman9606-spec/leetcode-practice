/*
Problem: 21. Merge Two Sorted Lists
Difficulty: Easy

Approach:
- Handle cases where either list is empty.
- Compare the first nodes of both lists to determine the head of the merged list.
- Maintain a tail pointer to the last node of the merged list.
- Repeatedly append the smaller node from the two lists and move the corresponding pointer.
- After one list is exhausted, attach the remaining nodes of the other list.
- Return the head of the merged linked list.

Time Complexity: O(n + m)
Space Complexity: O(1)

Where:
n = number of nodes in list1
m = number of nodes in list2
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    if(list1 == NULL)
        return list2;

    if(list2 == NULL)
        return list1;

    struct ListNode* curr1 = list1;
    struct ListNode* curr2 = list2;
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    if(curr1->val <= curr2->val){
        head = curr1;
        curr1 = curr1->next;
    }
    else{
        head = curr2;
        curr2 = curr2->next;
    }

    tail = head;

    while(curr1 != NULL && curr2 != NULL){

        if(curr1->val <= curr2->val){
            tail->next = curr1;
            curr1 = curr1->next;
        }
        else{
            tail->next = curr2;
            curr2 = curr2->next;
        }

        tail = tail->next;
    }

    if(curr1 != NULL)
        tail->next = curr1;
    else
        tail->next = curr2;

    return head;
}
