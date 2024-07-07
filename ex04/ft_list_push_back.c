#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list *pos;

	pos = begin_list;
	while(pos->next)
	{
		if(!pos->next)
			return (pos);
		pos = pos->next;
	}
	return ((void *)0);
}

t_list *ft_create_elem(void *data)
{
	t_list *new;

	new->data = data;
	new->next = (void *)0;
	return (new);
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	ft_list_last(*begin_list)->next = ft_create_elem(data);
}