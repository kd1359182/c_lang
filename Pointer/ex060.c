#include<stdio.h>
main()
{
	char date[] = "Language";
	char* p_date;
	char ch;
	int i;

	p_date = date;

	printf("date[]=%s\n", p_date);

	printf("検索文字は？　");
	scanf("%c", &ch);



	printf("検索結果は、");

	for (i = 0; *(p_date + i)!='\0'; i++)
	{
		if (ch == *(p_date + i))
		{
			printf("%d ", i + 1);
		}
	}
	printf("文字目です\n");

}