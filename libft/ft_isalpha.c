#include "libft.h"

int	ft_isalpha(int i)
{
	return (ft_islower(i) || ft_isupper(i));
}
