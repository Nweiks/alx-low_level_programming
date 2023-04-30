#include <stdlib.h>
#include "lists.h"

/**
*get_nodeint_at_index - get nth index
*@head: headof node
*@index: index to find
*Return: head
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j;

for (j = 0; head != NULL && j < index; j++)
{
head = head->next;
}
return (head);
}
