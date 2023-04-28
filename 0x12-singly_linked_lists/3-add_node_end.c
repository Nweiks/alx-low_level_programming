#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*add_node_end - add node at the end of
*@head: first element
*@str: string to be added
*Retutn: head
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
{
len++;
}
new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;

if (!*head)
{
*head = new_node;
return (new_node);
}
while (temp->next)
{
temp = temp->next;
temp->next = new_node;
}
return (new_node);
}
