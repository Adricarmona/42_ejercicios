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

void ft_memchr(const char *st,char ch ,int n)
{
while (0 != n)
{
	/* code */
}

}

int main()
{

}