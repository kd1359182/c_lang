#include<stdio.h>
#define WEEK 7
main()
{
	char* day[] = { "Sunday","monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	char** p=day;
	int i;

	//ƒpƒ^[ƒ“‚P
	for (i = 0; i < 7; i++)
	{
		printf("%s\n",day[i]);
	}
	printf("\n");

	//ƒpƒ^[ƒ“‚Q
	for (i = 0; i < WEEK; i++)
	{
		printf("%s\n", *(p+i));
	}
	printf("\n");

	//‚Ï‚½[‚ñ‚Q|‚Q
	while (*p)
	{
		printf("%s\n", *p++);
	}
}