#include<stdio.h>
main()
{
	char s[999];
	int k[999], i;

	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("�����ςݕ�����́A%s\n", &s[0]);
}