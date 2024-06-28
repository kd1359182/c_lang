#include<stdio.h>
main()
{
	int h,m,s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &s);
	if (s <= 5000)//ƒ}ƒCƒiƒX‚Í“ü—Í‚³‚ê‚È‚¢‚à‚Ì‚Æ‚·‚é
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
	}
	else
	{
		printf("ƒGƒ‰[:“ü—Í‚Í‚T‚O‚O‚O‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}