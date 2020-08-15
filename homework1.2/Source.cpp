#include<stdio.h>
 int main()
{
	int x;
	int y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x > 0 && y > 0)
	{
		printf("x and y more than 0");
	}
	if (x > 0 && y <= 0)
	{
		printf("x more than 0");
	}
	if (x <= 0 && y > 0)
	{
		printf("y more than 0");
	}
	if (x < 0 && y < 0)
	{
		printf("ERROR");
	}
	return 0;
}