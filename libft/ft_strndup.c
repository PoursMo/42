#include "libft.h"

char	*ft_strndup(char *str, int n)
{
	char	*dup;
	int		i;
	int		size;

	if (n > ft_strlen(str))
		size = ft_strlen(str);
	else
		size = n;
	dup = malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
