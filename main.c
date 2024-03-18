#include <stdbool.h>
#include <stdio.h>

#include "list.h"

bool hasCycle(struct ListNode* head);

int main() {
    struct ListNode* head_1 = NULL;
    head_1 = insert(head_1, 3);
    head_1 = insert(head_1, 2);
    head_1 = insert(head_1, 0);
    head_1 = insert(head_1, -4);
    head_1->next->next->next->next = head_1->next;
    printf("%d\n", hasCycle(head_1));

    struct ListNode* head_2 = NULL;
    head_2 = insert(head_2, 1);
    head_2 = insert(head_2, 2);
    head_2->next->next = head_2;
    printf("%d\n", hasCycle(head_2));

    struct ListNode* head_3 = NULL;
    head_3 = insert(head_3, 1);
    printf("%d\n", hasCycle(head_3));

    return 0;
}

bool hasCycle(struct ListNode* head) {
    for (int i = 0; i < 10001; i++) {
        if (head == NULL) {
            return false;
        }
        head = head->next;
    }
    return true;
}