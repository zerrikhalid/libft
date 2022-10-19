#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ** THIS FUNCTION IS FOR COUNTING HOW MANY LETTER I HAVE IN THE FIRST WORD OF
 THE FIRST STRING ARGUMENT IN ft_split function  ** */ 
static int letters_c(char *s1,char c)
{
	int i;

	i = 0;
	while (s1[i] != c && s1[i])
		i++;
	return (i);
}
////////////////

/* *** THIS FUNCTION IS FOR M_ALLOCATE THE ARRAY OF 1D ARRAYS
(THE 2D ARRAY (**p)),	I DECLARED IN ft_split  */
static char **init_w(char *s1, char c)
{
	int j;
	char **s2;

	j = 0;
	while (*s1)
	{
		while (*s1 == c)
			s1++;
		if (*s1 == '\0')
			break ;
		while (*s1 != c && *s1)
			s1++;
		j += 1;
	}
	s2 = (char **)malloc(sizeof(char *) * (j + 1));
	s2[j] = NULL;
	return (s2);
}
////////////////////////

/* ** THIS FUNCTION IS FOR M_ALLOCATE THE SIZE OF ARRAYS IN MY 2D ARRAY ** */
static char **ft_set(char *s1, char c)
{
	int j;
	char **p;

	j = 0;
	p = init_w(s1, c); 
	while (*s1)
	{
		while (*s1 == c)
			s1++;
		if (*s1 == '\0')
			break ;
		while (*s1 != c && *s1)
			s1++;
		p[j] = (char *)malloc(sizeof(char) * (letters_c(s1 , c) + 1));
		j++;
	}
	return (p);
}
/*** THIS IS : ft_split***/

char **ft_split(char *s, char c)
{
	char **p;
	int j;
	int k;

	j = 0;
	p = ft_set(s, c);
	while (*s)
	{
		k = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			p[j][k] = *s;
			s++;
			k++;
		}
		if (p[j] != 0)
			p[j][k] = '\0';
		j++;
	}
	return (p);
}

int main()
{
	char p[] = "i'm||so||glad||that||I|cant|be";
	char **p1 = ft_split(p , '|');
	int i = 0;
	while (p1[i])
	{
		printf("%s\n", p1[i]);
		i++;
	}
}