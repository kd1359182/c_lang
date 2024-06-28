#include<stdio.h>
main()
{
	int i,j;

	i = 0;

	while (i != -1)
	{
		printf("文字コード（ー１で入力終了）？");
		scanf("%d", &i);
		
		printf("%d\n", i + 0x4);
	}
}