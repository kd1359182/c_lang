#include<stdio.h>
#include<string.h>
struct hyouzi
{
	char cose[999];
	char kyouka[999];
	int tanni;
};

main()
{
	struct hyouzi  data = { "ゲームソフト１コース","C言語",8 };

	printf("コース名：%s\n",data.cose);
	printf("教科名：%s\n", data.kyouka);
	printf("単位数：%d\n", data.tanni);
}