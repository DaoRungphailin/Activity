#include <stdio.h>
int main()
{
	char str[50];
	char *ptr;
	ptr = str;
	scanf("%s", ptr);
	printf("Input : %s\n", str);
	printf("Output : ");
	for (int i = 0; *(ptr + i) != '\0'; i++)
	{
		if (*(ptr + i) != *(ptr + i + 1))
		{
			printf("%c", *(ptr + i));
		}
	}
	return 0;
}