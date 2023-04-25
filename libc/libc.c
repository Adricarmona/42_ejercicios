#include <stdio.h>

char ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32 ;
    }
    return (c);
}

char ft_tolower(char c)
{
    char x = c;
    if (x >= 'A' && x <= 'Z')
    {
        x = x + 32 ;
    }
    return (x);
}

char *ft_strchr(char c1 ,char *c2)
{
    while (*c2 != '\0')
    {
        if (*c2 == c1)
        {
            return c2;
        }
        c2++;
    }
    return NULL;
}

int ft_strncmp(const char *str1, const char *str2, int n)
{
int i = 0;
int in1;
int in2;
while (0 != n && (*str1 != '\0' && *str2 != '\0'))
{
    if (*str1 > *str2)
    {
        i = *str1 - *str2 + i;
    }else if (*str2 > *str1)
    {
        i = *str2 - *str1 + i;
    }
    *str1++;
    *str2++;
    n--;
}
    return i;
}

char *ft_memchr(char *st,char ch ,int n)
{
while (0 != n)
{
	if (ch == *st)
	{
		return st;
	}
	st++;
	n--;
}
return NULL;
}

int ft_memcmp(char *str1, char *str2, int n)
{
int i = 0;
while (0 != n)
{
	i = *str1 - *str2;
	if (i != 0)
	{
		if (i > 0)
		{
			return 1;
		}
		else if (i < 0)
		{
			return -1;
		}
	}
	str1++;
	str2++;
	n--;
}
return 0;
}
