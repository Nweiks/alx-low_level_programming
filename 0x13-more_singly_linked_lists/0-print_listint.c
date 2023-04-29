#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
*print_listint - list all ints
*@listint_t: the list to be listed
*@h: pointer to list
*Return: 0
*/

size_t print_listint(const listint_t *h)
{

size_t counts = 0;

while (h != NULL)
{
printf("%d\n", h->n);
counts++;
h = h->next;
}
return (0);
}
