/*
 * LeetCode 2390 - Removing Stars From a String
 *
 * Approach 1: Stack using Linked List
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 *
 * Approach 2: Use the Input String as a Stack (Optimal)
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////
// Approach 1 : Stack using Linked List
/////////////////////////////////////////////////////////////////

struct node {
    char data;
    struct node* next;
};

struct node* head = NULL;

void push(char value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void pop() {
    if (head == NULL)
        return;

    struct node* temp = head;
    head = head->next;
    free(temp);
}

char* removeStars_LinkedList(char* s) {
    head = NULL;

    int i = 0;

    while (s[i] != '\0') {
        if (s[i] != '*')
            push(s[i]);
        else
            pop();

        i++;
    }

    // Reverse the linked list
    struct node *prev = NULL, *curr = head, *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    // Copy back into the string
    struct node* temp = head;
    int j = 0;

    while (temp != NULL) {
        s[j++] = temp->data;

        struct node* del = temp;
        temp = temp->next;
        free(del);
    }

    s[j] = '\0';
    head = NULL;

    return s;
}

/////////////////////////////////////////////////////////////////
// Approach 2 : Use the Input String as a Stack (Optimal)
/////////////////////////////////////////////////////////////////

char* removeStars(char* s) {
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '*')
            top--;
        else
            s[++top] = s[i];
    }

    s[top + 1] = '\0';
    return s;
}

/////////////////////////////////////////////////////////////////
// Driver Code
/////////////////////////////////////////////////////////////////

int main() {

    char s1[] = "leet**cod*e";
    char s2[] = "leet**cod*e";

    printf("Linked List Stack : %s\n", removeStars_LinkedList(s1));
    printf("Optimal Solution  : %s\n", removeStars(s2));

    return 0;
}
