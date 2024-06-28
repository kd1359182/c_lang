#include<stdio.h>
main()
{
	FILE* fp;
	fp = str[256];

	fopen("file002.txt", "r");
	fscanf(fp, "%s", str);
	printf("str1:%s\n", str);

    fscanf(fp, "%s", str);
	printf("str2:%s\n", str);

	fscanf(fp, "%d%d%s", str);
	printf("str3:%s\n", str);

}