#include <stdlib.h>
#include "lists.h"

/**
*pop_listint - deletes an node
*@head: head of node
*Return: 0
*/

int pop_listint(listint_t **head)
{
int data;
listint_t *c_node;

if (*head == NULL)
{
return (0);
}

data = (*head)->n;
c_node = (*head);
*head = (*head)->next;
free(c_node);

return (data);
}
