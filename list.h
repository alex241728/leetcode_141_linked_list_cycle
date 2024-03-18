//
// Created by Alex Yang on 2024-03-18.
//

#ifndef CXLI_LINKED_LIST_CYCLE__LIST_H
#define CXLI_LINKED_LIST_CYCLE__LIST_H

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* create_new_node(int val);

struct ListNode* insert(struct ListNode* head, int val);

#endif//CXLI_LINKED_LIST_CYCLE__LIST_H
