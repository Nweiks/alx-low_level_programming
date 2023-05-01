#include <stdlib.h>
#include "lists.h"

/**
*delete_nodeint_at_index - deletes a node st point index
*@head: doublre pointer to head
*@index: place to delete the node
*Return: 0 sucess
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *current;
unsigned int j;

if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
current = *head;
*head = current->net;
free(current);
return (1);
}
prev = NULL;
current = *head;
for (j = 0; j < index && current != NULL; j++)
{
prev = current;
current - current->next;
}

if (current == NULL)
{
return (-1(;
}
if (prev != NULL)
{
prev->next = current->next;
}
else
{
*head = current->next;
free(current);
}
return (1);
}
