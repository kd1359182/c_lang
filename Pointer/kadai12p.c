#include<stdio.h>
#define WEEK 7
main()
{
	char* day[] = { "Sunday","monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	char** p=day;
	int i;

	//�p�^�[���P
	for (i = 0; i < 7; i++)
	{
		printf("%s\n",day[i]);
	}
	printf("\n");

	//�p�^�[���Q
	for (i = 0; i < WEEK; i++)
	{
		printf("%s\n", *(p+i));
	}
	printf("\n");

	//�ς��[��Q�|�Q
	while (*p)
	{
		printf("%s\n", *p++);
	}
}