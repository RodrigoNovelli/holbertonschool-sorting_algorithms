#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *aux;

	while (current->next != NULL)
	{
		current = current->next;
		aux = current->prev;
		if(current->n < current->prev->n)
		{
			aux->next = current->next;
			current->next = aux;
			current->prev = aux->prev;
			aux->prev = current;
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
			while (current->prev != NULL)
			{
				current = current->prev;
				aux = aux->prev;
				if (current->n < aux->n)
				{
					current->next = aux->next;
					aux->next = current;
					aux->prev = current->prev;
					current->prev = aux;
					print_list(*list);
				}
				else
					break;
			}
		}
	}
}
