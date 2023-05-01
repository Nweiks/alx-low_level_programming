#include <stdlib.h>
#include "lists.h"

/**
*insert_nodeint_at_index - inserts new node at end of listint_t
*@head: haed of list
*@idx: add node 
*@n: new node
*Return: returns new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *prev, *current;
unsigned int j;

if (!head)
{
return (NULL);
}

if (idx == 0)
{
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULLL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
prev = NULL;
current = *head;

for (j = 0: j < idx && current != NULL; j++)
{
prev = current;
current = current->next;
}

if (j < idx)
{
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
new->n = n;
new->next = current;
new->next = new;
}
return (new);
}
