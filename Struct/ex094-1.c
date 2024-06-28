#include<stdio.h>
#include<string.h>
#define NIN 5

struct day
{
	int nen;
	int tuki;
	int hi;
};

struct profile
{
	char name[20];
	struct day data;
	char blood[5];
};

main()
{
	struct profile data[NIN] = { {"rina",2000,2,20,"A"},
		                       {"naoto",2003,3,23,"B"},
		                       {"toru",2002,7,3,"O"},
		                       {"kanami",1970,2,17,"AB"},
		                       {"EEEEE",2009,4,23,"A"}};
	struct profile* p;
	int i;

	for (i = 0, p = data; i < NIN; i++, p++)
	{
		if (p->data.tuki == 2)
		{
			printf("%s--%d”N%02dŒŽ%02d“ú¶@ŒŒ‰tŒ^-%sŒ^\n", p->name, p->data.nen, p->data.tuki, p->data.hi,p->blood);
		}
	}
}