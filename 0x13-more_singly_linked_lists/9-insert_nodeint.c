#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*insert_nodeint_at_index - inserts new node at end of listint_t
*@head: haed of list
*@idx: add node
*@n: new node
*Return: returns new node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

listint_t *new, *prev = NULL, *current = *head;
unsigned int j;

if (head == NULL)
{
return (NULL);
}

if (idx == 0)
{
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
for (j = 0; j < idx && current != NULL; j++)
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
}
new->n = n;
new->next = current;
prev->next = new;
return (new);
}
