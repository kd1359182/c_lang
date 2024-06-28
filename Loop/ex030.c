#include<stdio.h>
main()
{
	int num, cnt;
	printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &num);
		cnt = 0;
		while(cnt<=10)
		{
			printf("%d+%d=%d\n", num, cnt, num + cnt);
			cnt++;
		}
}