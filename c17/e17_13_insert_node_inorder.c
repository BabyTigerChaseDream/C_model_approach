/*
The following function is supposed to insert a new node into its proper place
in an ordered list, returning a pointer to the first node in the modified list.
Unforunately, the function doesn't work corectly in all cases. Explain what's
wrong with it and show how to fix it. Assume that the node structure is the
one defined in section 17.5.
*/

// WRONG VERSION
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur = list, *prev = NULL;
    while (cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
    return list;
}

// correct VERSION
void insert_into_ordered_list(struct node **list, struct node *new_node)
{
    struct node **cur = list;

    while(*cur){ 
        if((*cur)->value <= new_node->value)
            break;
        *cur = (*cur)->next;
    }

    new_node->next = *cur;
    *cur = new_node;

}
