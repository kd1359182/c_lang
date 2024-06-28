#include<stdio.h>
main()
{
	int m;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &m);
	if (m == 2)
	{
		printf("ÅI“ú‚Í‚Q‚W“ú‚Å‚·B\n");
	}
	else
	{
		if((m == '1') || (m == '3') || (m == '5') || (m == '7') || (m == '8') || (m == '10') || (m == '12'))
		{
			printf("ÅI“ú‚Í‚R‚P“ú‚Å‚·\n");
		}
		else
		{
			printf("ÅI“ú‚Í‚R‚O“ú‚Å‚·B\n");
		}
	}
}