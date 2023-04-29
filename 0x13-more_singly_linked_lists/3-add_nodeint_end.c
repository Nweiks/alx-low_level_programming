#include <stdlib.h>
#include "lists.h"

/**
*add_nodeint - adds to end of node
*@head: head of node
*@n: to be added
*Return: new
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;
new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
last = *head;

while (last->next != NULL)
last = last->next;
last->next = new;
}
return (new);
}
