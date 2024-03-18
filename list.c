//
// Created by Alex Yang on 2024-03-18.
//

#include <stdlib.h>

#include "list.h"

struct ListNode* create_new_node(int val) {
    struct ListNode* new = (struct ListNode*) malloc(sizeof(struct ListNode));
    new->val = val;
    new->next = NULL;
    return new;
}

struct ListNode* insert(struct ListNode* head, int val) {
    struct ListNode* new = create_new_node(val);

    if (head == NULL) {
        return new;
    }

    struct ListNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new;

    return head;
}