#include<stdio.h>
main()
{
	char date[] = "Apple";

	int i;

	printf("1�������\��\n");

	i = 0;

	while (date[i] != '\0')
	{
		printf("%c", date[i]);
		i++;
	}
	printf("\n������ŕ\��\n");
	printf("%s\n", &date[0]);
}