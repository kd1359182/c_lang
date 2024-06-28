#include<stdio.h>
void cat(char* moji1, char* moji2);
main()
{
	char a[999], b[999];

	printf("”z—ña:");
	gets(a);

	printf("”z—ñb:");
	gets(b);

	cat(a, b);

	printf("”z—ña:%s", a);
}

void cat(char* moji1, char* moji2)
{
	int i, j;

	/*for (i = 0; *(moji1 + i) != '\0'; i++);
	for (j = 0; *(moji1 + i) = *(moji2 + j); i++, j++);*/

	for (i = 0; *moji1 != '\0'; *moji1++);
	for (i = 0; *moji2 != '\0'; *moji2++,*moji1++)
	{
		*moji1 = *moji2;
	}
	*moji1 = '\0';
}