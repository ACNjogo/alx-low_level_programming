#include "lists.h"
/**
* free_listint - function that frees a listint_t list.
* @head: start of struct
*/
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL)
{
tmp = head;
free(head);
head = tmp->next;
}

}
