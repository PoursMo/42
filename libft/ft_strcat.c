#include "libft.h"

char	*ft_strcat(char *dst, char *src)
{
	int	i;

	i = 0;
	while(dst[i])
		i++;
    ft_strcpy(dst + i, src);
    return dst;
}
