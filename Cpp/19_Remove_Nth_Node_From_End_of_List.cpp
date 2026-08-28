/**
 * LeetCode 19 - Remove Nth Node From End of List
 *
 * Approach:
 * - First count the number of nodes.
 * - Find the node immediately before the one to remove.
 * - Remove it by changing the next pointer.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int num = 0;
        ListNode* count = head;

        while (count != nullptr) {
            num++;
            count = count->next;
        }

        if (n == num) {
            return head->next;
        }

        ListNode* curr = head;
        int pos = num - n - 1;

        while (pos > 0) {
            curr = curr->next;
            pos--;
        }

        curr->next = curr->next->next;

        return head;
    }
};
