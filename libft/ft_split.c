#include "libft.h"

int count_strs(char *str, char *charset)
{
	int count;

	count = 0;
	while(*str)
	{
		while(*str && ft_ischarset(*str, charset))
			str++;
		if(*str && !ft_ischarset(*str, charset))
		{
			count++;
			while(*str && !ft_ischarset(*str, charset))
				str++;
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	split = malloc(sizeof(char *) * (count_strs(str, charset) + 1));
	if(!split)
		return (NULL);
	i = 0;
	while(*str)
	{
		while(*str && ft_ischarset(*str, charset))
			str++;
		if(*str && !ft_ischarset(*str, charset))
		{
			split[i] = add_str(str, charset);
			if(split[i])
				i++;
			while(*str && !ft_ischarset(*str, charset))
				str++;
		}
	}
	split[i] = NULL;
	return (split);
}