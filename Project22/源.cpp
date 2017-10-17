#include<stdio.h>
int main()
{
	float a;
	int x;
	float y;
	scanf("%f", &a);
	x = int (a);
	y = a - int(a);
	printf("整数部分为  %d,小数部分为   %f", x, y);
	return 0;
}