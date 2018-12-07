#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	char src[100] = "hglhbjhb hjb erverber    ";
//	char dest[10] = "11111asdf";

	char **n = ft_strsplit(src, ' ');

	//printf("%s\n", n);
	
	 int i = 0;
	 while (n[i])
	 {
	 	printf("%s\n", n[i]);
	 	i++;
	 }

	// i = 0;
	// while (i < 4)
	// {
	// 	printf("%s\n", n[i]);
	// }

	return 0;
}
