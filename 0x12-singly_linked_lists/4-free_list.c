#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

/**
 * free_list - frees a list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
		current = head;
	}
}
