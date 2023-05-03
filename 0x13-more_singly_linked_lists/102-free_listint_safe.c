#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
*free_listint_safe - frees a list
*@h: double pointer to head of list
*
*Return: count
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h, *next;
size_t count = 0;

while (current)
{
count++;
next = current->next;
free(current);

if (next <= current)
{
*h = NULL;
break;
}
current = next;
}
*h = NULL;
return (count);
}
