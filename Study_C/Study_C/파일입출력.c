#include <stdio.h>

#if 0
int main(void)
{
	FILE* fp = NULL;
	fp = fopen("output.txt", "w");
	//w -> ������, r-> �б���
	if (fp == NULL)
		printf("���� ���⿡ �����߽��ϴ�.");
	else
		printf("���� ���⿡ �����߽��ϴ�.");
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);

	return 0;
}
#endif