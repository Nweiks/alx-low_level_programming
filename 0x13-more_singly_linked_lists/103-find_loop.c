#include <stdio.h>
#include "lists.h"

/**
*firn_listint_loop - find if there is a looo using floyds algorithmn
*@head: pointer to head of list
*Return: slow
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

slow = fast = head;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
break;
}
if (!fast || !fast->next)
return (NULL);

slow = head;

while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
