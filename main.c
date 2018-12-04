#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	char src[100] = "the cake is a lie !\0I'm hidden lol\r\n";
	char dest[10] = "asdfghh";

	size_t n = ft_strlcat(dest, src, 100);	
	printf("%zu\n", n);
	printf("%s\n", dest);

	int i = 0;
	while (i < 20)
	{
//		printf("%c", str[i]);
		i++;
	}
	return 0;
}
