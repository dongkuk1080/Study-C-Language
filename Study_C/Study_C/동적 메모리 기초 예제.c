#include <stdio.h>
#include <stdlib.h>

#if 0
int main(void)
{
	int* pi; // Pointer Integer
	pi = (int *)malloc(sizeof(int)); // malloc = �޸𸮸� �Ҵ��ض�.

	if (pi == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.");
		exit(1);
	}

	*pi = 100;
	printf("%d\n", *pi);
	/* ���� �޸� ����� ���Ŀ��� ������ �ش� �޸𸮸� ��ȯ�մϴ�.*/
	free(pi);

	return 0;
}
#endif