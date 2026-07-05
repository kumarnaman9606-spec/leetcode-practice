/*
Problem: 2236. Root Equals Sum of Children
Difficulty: Easy

Approach:
- Access the values of the left and right child nodes.
- Compute their sum.
- Compare it with the value of the root node.
- Return true if they are equal; otherwise, return false.

Time Complexity: O(1)
Space Complexity: O(1)
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool checkTree(struct TreeNode* root) {

    if(root->left->val + root->right->val == root->val){
        return true;
    }

    return false;
}
