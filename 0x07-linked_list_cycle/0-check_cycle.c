#include "lists.h"
/**
*check_cycle - check function
*@list: linked list pointer to header
*Return: 1 if true, 0 if null
*/
int check_cycle(listint_t *list)
{
listint_t *list_1, *list_2;
list_1, list_2 = list, list;

while (list_2 && list_2->next)
{
list_1 = list_1->next;
list_2 = list_2->next->next;
if (list_2 == list_1)
{
return (1);
}
}
return (0);
}
