#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: The pointer to the first node of linked list
  */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		head = tmp;
		free(head->str);
		free(head);
	}
}
