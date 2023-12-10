#include <stdio.h>
#include <string.h>

int		main()
{
	char input[20];
	char *str = "__stack_check";

	printf("Please enter key: ");
	scanf("%s", input);
	if (strcmp(input, str) != 0)
	{
		printf("Nope.\n");
	}
	else
	{
		printf("Good job.\n");
	}
	return 0;
}
