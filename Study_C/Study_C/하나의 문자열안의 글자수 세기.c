#include <stdio.h>

#if 0
int main(void)
{
	char input[1001];
	gets(input);
	int count = 0;
	// HELLO\0
	while (input[count] != '\0')
	{
		count++;
	}
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.", count);
	printf("�Է��� ���ڿ� : %s", input);
	return 0;
}
#endif