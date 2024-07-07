#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *list;

	list->data = data;
	list->next = 0;
	return (list);
}