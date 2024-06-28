#include<stdio.h>
main()
{
	char date[] = "abcde";

	int i;

	i = 0;

	while (date[i] != '\0')
	{
		printf("%c", date[i]);
		i++;
	}
}