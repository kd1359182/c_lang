#include<stdio.h>
main()
{
	int score = 0,max_score=0;
	char ch,max_name[20], name[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r"))
	{
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
	}
	else
	{
		printf("�t�@�C���ǂݍ��݃G���[\n");
		return;
	}

	printf("�ō����_�@���O�F%s �X�R�A�F%d\n", max_name, max_score);

	printf("p���C���[������́F");
	scanf("%s", name);

	while (1)
	{
		printf("�X�R�A�F%d('e'�ŏI��)\n", score);
		ch = getch();

		if (ch == 'e')
		{
			break;
		}
		score++;
	}

	if (score>max_score)
	{
		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
		}
	}
}