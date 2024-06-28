#include<stdio.h>
main()
{
	char date[] = "Apple";

	int i;

	printf("1•¶Žš‚¸‚Â•\Ž¦\n");

	i = 0;

	while (date[i] != '\0')
	{
		printf("%c", date[i]);
		i++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &date[0]);
}