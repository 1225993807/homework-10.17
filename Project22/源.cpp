#include<stdio.h>
int main()
{
	float a;
	int x;
	float y;
	scanf("%f", &a);
	x = int (a);
	y = a - int(a);
	printf("��������Ϊ  %d,С������Ϊ   %f", x, y);
	return 0;
}