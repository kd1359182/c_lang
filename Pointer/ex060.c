#include<stdio.h>
main()
{
	char date[] = "Language";
	char* p_date;
	char ch;
	int i;

	p_date = date;

	printf("date[]=%s\n", p_date);

	printf("ŒŸõ•¶š‚ÍH@");
	scanf("%c", &ch);



	printf("ŒŸõŒ‹‰Ê‚ÍA");

	for (i = 0; *(p_date + i)!='\0'; i++)
	{
		if (ch == *(p_date + i))
		{
			printf("%d ", i + 1);
		}
	}
	printf("•¶š–Ú‚Å‚·\n");

}