#include "list.h"
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int check_cycle(struct Node* list) {
    struct Node* slow_p = list;
    struct Node* fast_p = list;

    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;

        if (slow_p == fast_p) {
            return 1; // Cycle found
        }
    }

    return 0; // No cycle
}
