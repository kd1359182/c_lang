#include<stdio.h>
main()
{
	int num, i;

	char ope;

	printf("‰‰ZqH");
	scanf("%c", &ope);

	printf("®”‚PH");
	scanf("%d", &num);

	printf("®”‚QH");
	scanf("%d",&i);


	switch (ope)
	{
	case'+':
		printf("%d+%d=%d\n",num,i,num+i);
		break;

	case'-':
		printf("%d-%d=%d\n",num,i,num-i);
		break;

	case'*':
		printf("%d*%d=%d\n",num,i,num*i);
		break;

	case'/':
		printf("%d/%d=%d\n",num,i,num/i);
		break;

	case '%':
		printf("%d%%d=%d\n",num,i,num%i);
		break;
	}
}