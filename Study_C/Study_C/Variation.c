#include <stdio.h>

#if 0
int main(void)
{
	int x = 50;
	float y = 123456789.123456789;
	double z = 123456789.123456789;
	
	printf("변수 x(%d)의 메모리 크기는 %d입니다.\n", x, sizeof(x));
	printf("변수 y(%.2f)의 메모리 크기는 %d입니다.\n", y, sizeof(y));
	printf("변수 z(%.2f)의 메모리 크기는 %d입니다.\n", z, sizeof(z));

	return 0;
}
#endif