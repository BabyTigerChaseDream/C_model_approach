struct node *find_last(struct node * list, int n)
{
   struct node *last=NULL;
   while(list)
   {
        if(list->value ==n)
            last = list;
        list=list->next;
   }
   return last;
}
