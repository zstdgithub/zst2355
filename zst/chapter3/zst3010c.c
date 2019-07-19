/*
如果输入的整数值为正，则判断该值的奇偶性并显示
*/
#include <stdio.h>

int main(void)
{
	int num;

	print("请输入一个整数：")；
	scanf("%d",&num);

	if(num>0)
		if(num%2==0)
			puts("该整数为偶数");
		else
			puts("该整数为奇数");
	else
			puts("您输入的不是正数");

		return0;
}