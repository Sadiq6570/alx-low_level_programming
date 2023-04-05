#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - ...
  * @head: ...
  *
  * Return: ...
  */
int sum_listint(listint_t *head)
{
	int cost = 0;

	if (head)
	{
		while (head)
		{
			cost += head->n;
			head = head->next;
		}
	}

	return (cost);
}
