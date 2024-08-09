#include "sort.h"
/**
 * insertion_sort_list - Put the nodes in order (n based)
 * @list: A pointer to the head.
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *aux;

	while (current)
	{
		aux = current->prev;
		while (aux != NULL && aux->n > current->n)
		{
			current->prev = aux->prev;
			aux->next = current->next;
			aux->prev = current;
			current->next = aux;
			if (aux->next)
				aux->next->prev = aux;
			if (current->prev)
				current->prev->next = current;
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
			aux = current->prev;
		}
		current = current->next;
	}
}
