#include<stdio.h>
main()
{
	char str[256];
	char *cp;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	cp = gets(str);

	while (cp != NULL)
	{
		printf("“ü—Í‚³‚ê‚½‚Ì‚ÍF%s\n", cp);
		printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
		cp = gets(str);
	}


}