#include <stdio.h>

#if 0
// �ݺ��Լ��� �̿��Ͽ� ���� �Ƕ�̵带 ����մϴ�.
// �ݺ��Լ� ���� ���� ���� FOR���� WHILE������ ������ �˴ϴ�.

int print(int a)
{
	int i, j;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d", j+1);
		}
		printf("\n");
	}
}

int main(void)
{
	int a;
	scanf("%d", &a);
	print(a);

	return 0;
}
#endif