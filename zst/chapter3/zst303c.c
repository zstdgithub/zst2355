/*
输入的整数能被5整除吗
*/
#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：")；
	scanf("%d",&no);

	if (no%5)
		puts("该整数不能被5整除。");
	else
		put("该整数能被5整除。");

	return o;
}