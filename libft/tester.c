#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char t[100] = "caca ";
	char *t2 = "pipi popo pipu";
    printf("%s\n", ft_strcat(t, t2));
    printf("%s\n", strcat(t, t2));
}