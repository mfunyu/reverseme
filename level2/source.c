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

int	main()
{
	char	input[24];
	char	str2[9];
	int		index1;
	int		index2;

	printf("Please enter key: ");
	if (scanf("%23s", input) != 1)
		no();

	if (input[0] != '0')
		no();
	if (input[1] != '0')
		no();

	//fflush(*stdin);
	memset(str2, 0, 9);
	str2[0] = 'd';
	index1 = 2;
	index2 = 1;
	char	num[4];
	num[3] = '\0';
	while (true)
	{
		if (strlen(str2) > 8 || index1 >= (int)strlen(input))
				break;
		num[0] = input[index1];
		num[1] = input[index1 + 1];
		num[2] = input[index1 + 2];
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
