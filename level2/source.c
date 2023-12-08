#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void	no()
{
	puts("Nope.");
	exit(1);
}

int	ok()
{
	return puts("Good job.");
}

int	main(int ac, char** av)
{
	char	input;
	char	str1[24];
	char	*str2;
	int		index1;
	int		index2;

	printf("Please enter key: ");
	if (scanf("%23s", &input) != 1)
		no();

	if (str1[0] != '0')
		no();
	if (str1[1] != '0')
		no();

	//fflush(*stdin);
	memset(str2, 0, 9);
	str2[0] = 'd';
	index1 = 2;
	index2 = 1;
	char	num[3];
	while (true)
	{
		if (strlen(str2) < 8)
		{
			if (index1 >= strlen(&input))
				break;
		}
		num[0] = str1[0];
		num[1] = str1[1];
		num[2] = str1[2];
		str2[index2] = (char)atoi(num);
		index1 += 3;
		index2 += 1;
	}
	str2[index2] = '\0';

	if (strcmp(str2, "delabere") == 0) {
		ok();
	} else {
		no();
	}
	return 0;
}
