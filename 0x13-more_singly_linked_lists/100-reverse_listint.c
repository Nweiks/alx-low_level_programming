#include <stdlib.h>
#include "lists.h"

/**
*reverse_listint - reverses a list listint_t
*@head: head of lust to be reversed
*
*Return: pointer to head
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next_n;

while (*head)
{
next_n = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next_n;
}
*head = prev;
return (*head);
}
