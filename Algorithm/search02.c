#include<stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 };

	printf("�T���ls�����:");
	scanf("%d", &s);

	for (i = 0, d[10] = s; s != d[i]; i++)

	d[10] = s;
	i = 0;
	while (s != d[i])
	{
		i++;
	}

	if (i == 10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("�T���l%d���Ad[%d]�Ŕ����I\n", s, i);
	}
}