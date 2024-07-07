#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *new;

	new->data = data;
	new->next = 0;
	return (new);
}