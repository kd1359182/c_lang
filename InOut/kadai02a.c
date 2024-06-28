#include<stdio.h>
main()
{
	double i,j;

	printf("‚Q‚Â‚ÌÀ”H");
	scanf("%lf%lf", &i, &j);

	printf("***%.1f‚Æ%.1f‚Ìl‘¥‰‰Z***\n", i, j);

	printf("˜a%f ", i + j);

	printf("·%f ", i - j);

	printf("Ï%f ", i * j);

	printf("¤%f ", i / j);
}