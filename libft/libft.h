#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

// types
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isblank(int i);
int		ft_isdigit(int i);
int		ft_islower(int i);
int		ft_isprint(int i);
int		ft_isspace(int i);
int		ft_isupper(int i);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_ischarset(char c, char *charset);
// 
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strcat(char *dst, char *src);
char	*ft_strdup(char *str);
char	*ft_strndup(char *str, int n);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strstr(char *haystack, char *needle);
char	**ft_split(char *str, char *charset);

#endif