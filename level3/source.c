#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	___syscall_malloc()
{
	puts("Nope.");
	exit(1);
}

int	_____syscall_malloc()
{
	return puts("Good job.");
}

int	main()
{
	char nums[4];
	char str1[31];
	char converted[9];
	size_t index;
	int i;
	int ret;

	printf("Please enter key: ");
	ret = scanf("%23s", str1);
	if (ret != 1 || str1[0] != '4' || str1[1] != '2')
		___syscall_malloc();

	fflush(stdin);
	memset(converted, 0, sizeof(converted));
	converted[0] = '*';
	nums[3] = '\0';
	index = 2;
	for(i = 1; ; ++i)
	{
		if (strlen(converted) >= 8 || index >= strlen(str1))
			break;
		nums[0] = str1[index];
		nums[1] = str1[index + 1];
		nums[2] = str1[index + 2];
		converted[i] = atoi(nums);
		index += 3;
	}
	converted[i] = '\0';
	switch (strcmp(converted, "********"))
	{
		case -2:
			___syscall_malloc();
			break;
		case -1:
			___syscall_malloc();
			break;
		case 0:
			_____syscall_malloc();
			break;
		case 1:
			___syscall_malloc();
			break;
		case 2:
			___syscall_malloc();
			break;
		case 3:
			___syscall_malloc();
			break;
		case 4:
			___syscall_malloc();
			break;
		case 5:
			___syscall_malloc();
			break;
		case 115:
			___syscall_malloc();
			break;
		default:
			___syscall_malloc();
			break;
	}
	return 0;
}
