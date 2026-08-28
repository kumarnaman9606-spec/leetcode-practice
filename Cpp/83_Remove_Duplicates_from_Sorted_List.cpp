/**
 * LeetCode 83 - Remove Duplicates from Sorted List
 *
 * Approach:
 * - Use two pointers.
 * - curr keeps the last unique node.
 * - run scans through the remaining nodes.
 * - Skip duplicate values and connect curr to the next unique node.
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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* curr = head;

        if (head == nullptr) {
            return nullptr;
        }

        ListNode* run = head->next;

        while (run != nullptr) {

            if (curr->val == run->val) {
                run = run->next;
            }
            else {
                curr->next = run;
                curr = curr->next;
                run = run->next;
            }
        }

        curr->next = nullptr;

        return head;
    }
};
