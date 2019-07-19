/*判断输入的整数的符号
*/
#include<stdio.h>

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d,&num");

	if(num==0)
		puts("该整数为0");
	else if(num>0)
		puts("该整数为正数");
	else if(num<0)
		puts("该整数为负数");

	return 0;
}