#include "libft.h"

int	count_strs(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_ischarset(*str, charset))
			str++;
		if (*str && !ft_ischarset(*str, charset))
		{
			count++;
			while (*str && !ft_ischarset(*str, charset))
				str++;
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		size;

	split = malloc(sizeof(char *) * (count_strs(str, charset) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_ischarset(*str, charset))
			str++;
		if (*str && !ft_ischarset(*str, charset))
		{
			size = 0;
			while (*(str + size) && !ft_ischarset(*(str + size), charset))
				size++;
			split[i] = ft_strndup(str, size);
			i++;
			while (*str && !ft_ischarset(*str, charset))
				str++;
		}
	}
	split[i] = NULL;
	return (split);
}
