#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	char src[100] = "the cake is a lie !\0I'm hidden lol\r\n";
	//char dest[10] = "asdfghh";

	char *n = NULL;
	n = ft_strrchr(src, 'a');	
	printf("%s\n", n);

	int i = 0;
	while (i < 20)
	{
//		printf("%c", str[i]);
		i++;
	}
	return 0;
}
