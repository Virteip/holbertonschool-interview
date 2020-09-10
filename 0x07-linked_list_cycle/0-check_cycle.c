#include "lists.h"
/**
*check_cycle - check function
*@list: linked list pointer to header
*Return: 1 if true, 0 if null
*/
int check_cycle(listint_t *list)
{
listint_t *l1, *l2;
if (!list)
return (0);
l1 = list;
l2 = list;
while (l1 && l2 && l2->next)
{
l1 = l1->next;
l2 = l2->next->next;
if (l2 == l1)
return (1); }
return (0); }
