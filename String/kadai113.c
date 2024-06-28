#include<stdio.h>
main()
{
	char date[] = "GameSoft";

	int i, j;

	i = 0;

	while (date[i] != '\0')
	{
		i++;
	}
	printf("•¶š—ñ=%s\n", &date[0]);
	printf("•¶š”=%d•¶š\n", i);
}