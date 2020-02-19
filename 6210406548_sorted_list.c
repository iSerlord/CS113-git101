#include <stdio.h>
#include <stdlib.h>
struct node {
 struct node *back ;
 int data ;
 struct node *next ;
};
void new_room(struct node **start ,struct node **final , int num)
{ struct node *count , *new_node , *count_prev;
 if (*start == NULL)
 {
 *start = *final = (struct node*)malloc(sizeof(struct node)) ;
 (*final)->next = NULL ;
 (*final)->back = NULL ;
 (*final)->data = num ;
 }
 else
 {
 for (count = *start ; count != NULL ; count = count -> next)
 {
 if (num >= count->data )
 {
     if (count->next == NULL)
     {
        new_node = (struct node*)malloc(sizeof(struct node)) ;
        new_node -> back = count ;
        new_node -> next = NULL ;
        count-> next = new_node ;
        new_node ->data = num ;
        
     }
     else 
     {
         continue ;
     }
    break ;
 }
 if (num < count->data && count->back== NULL)
 {
 new_node = (struct node*)malloc(sizeof(struct node)) ;
 new_node -> back = NULL ;
 new_node -> next = *start ;
 (*start) -> back = new_node ;
 (*start) = new_node ;
 new_node ->data = num ;
 
 break ;
 }
 else if (num < count->data)
 {
 new_node = (struct node*)malloc(sizeof(struct node)) ;
 new_node -> next = count ;
 new_node -> back = count -> back ;
 count_prev = (count -> back) ;
 count_prev ->next = new_node ;
 count -> back = new_node ;
 
 new_node ->data = num ;
 
 }



 }

 
 }


}
void print_list(struct node *start)
{ struct node *tmp;
 for (tmp=start; tmp; tmp = tmp -> next)
 printf("%d\n", tmp->data);
}
int main ()
{
 int n ;
 struct node *head = NULL , *last = NULL ;
 while (1)
 {
 scanf("%d",&n) ;
 if (n == -1)
 {
 break ;
 }
 new_room(&head , &last , n);

 }
 print_list (head) ;

}