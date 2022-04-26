#include "lists.h"

/**
* pop_listint - func that pops
* @head: start of list
* Return: popped var
*/
int pop_listint(listint_t **head)
{
int head_node;
listint_t *h;
listint_t *current;

if (*head == NULL)
return (0);

current = *head;

head_node = current->n;

h = current->next;

free(current);

*head = h;

return (head_node);
}
