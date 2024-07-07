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