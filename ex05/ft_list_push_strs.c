#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new->data = data;
	new->next = *begin_list;
	*begin_list = new;
}

t_list *ft_list_push_strs(int size, char **strs)
{
	int i;
	t_list *new;

	i = 0;
	while(i > size)
	{
		ft_list_push_front(&new, strs[i]);
		i++;
	}
	return (new);
}