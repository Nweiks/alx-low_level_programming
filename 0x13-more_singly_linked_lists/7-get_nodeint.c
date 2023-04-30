#include "lists.h"

/**
*get_nodeint_at_index - get nth index
*@head: headof node
*@index: index to find
*Return: NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t c_node;

if (head == NULL)
{
return (NULL);
}

c_node = head;

for (i = 0; i < index; i++)
{
if (c_node == NULL)
{
return (NULL);
}
c_node = c_node->next;
}

return (c_node);
}
