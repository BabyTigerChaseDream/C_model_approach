#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

struct node_t {
    int value;
    struct node_t *next;
};

struct node_t* create_list() {
    int test_values[] = { 28, 1, 8, 70, 56 };
    struct node_t *new_node, *head = NULL;
    int i;

    for (i = 0; i < 5; i++) {
        new_node = (struct node_t*)malloc(sizeof(struct node_t));
        assert(new_node);
        new_node->value = test_values[i];
        new_node->next = head;
        head = new_node;
    }

    return head;
}

void print_list(const struct node_t *head) {
    for (; head; head = head->next)
        printf("%d ", head->value);
    printf("\n");
}

void destroy_list(struct node_t **head) {
    struct node_t *next;

    while (*head) {
        next = (*head)->next;
        free(*head);
        *head = next;
    }
}

void remove_from_list(int val, struct node_t **head) {
    struct node_t *del, **p = head;

    while (*p && (**p).value != val)
        p = &(*p)->next;  // alternatively: p = &(**p).next

    if (p) {  // non-empty list and value was found
        del = *p;
        //*p = del->next;
        *p = (*p)->next;
        del->next = NULL;  // not necessary in this case
        free(del);
    }
}

int main(int argc, char **argv) {
    struct node_t *head;

    head = create_list();
    print_list(head);

    remove_from_list(8, &head);
    print_list(head);

    destroy_list(&head);
    assert (head == NULL);

    return EXIT_SUCCESS;
}
