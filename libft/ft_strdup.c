#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	ft_strcpy(dup, str);
	return (dup);
}
