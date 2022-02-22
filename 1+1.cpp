#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入加数（中间请用逗号隔开）\n");
	scanf_s("%d,%d", &a, &b);
	c = a + b;
	printf("两数之和为%d", c);
	return 0;
}