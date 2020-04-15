#include <stdlib.h>
#include <stdio.h>
#include<string.h> 

//printf("f");

int		ft_strlen(char *str)
{
	int res = 0;
	while (str[res])
	{
		res++;
	}
	return res;
}

int	check(char *str, char *del)
{
	while (*str && *del)
	{
		if (*str != *del)
			return 0;
		del++;
		str++;
	}
	return 1;
}




	
int		main()
{
	char *str = "abc::defg::w";
	char *del = "::";
	char **hoge = (char **)malloc((sizeof(char*) * 4));
	int l = ft_strlen(del);
	
	int j = 0;
	while (*str)
	{
		int tmp = l;
		while (*str && check(str, del))
		{
			// remove ::
			while (tmp--)
			{
				str++;
			}
		}
		int i = 0;
		char * ho = str;
		while (*ho && !check(ho, del))
		{
            i++;
			ho++;
		}
		tmp = i;
		printf("!!str %s\n", str);
		printf("i=%d\n", i);
		char *word = (char *)malloc(sizeof(char) * i + 1);
		int k = 0;
		while (k < i)
		{
			word[k++] = *str;
			str++;
		}
		word[k] = '\0';
		printf("word %s\n", word);
		char *g = strdup(word);
		hoge[j] = g;
		printf("hoge%s\n", hoge[j]);
		j++;
		free(word);
	//	word = NULL;
	}
	
	hoge[j] = NULL;
	printf("hoge0%s\n", hoge[0]);
	printf("hoge1%s\n", hoge[1]);
	printf("hoge1%s\n", hoge[2]);
}

