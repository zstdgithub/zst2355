/*
显示输入的整数值以下的约数
*/
#include <stdio.h>
int main(void)
{
	int i,n;


	printf("请输入一个整数：");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		if(n%i==0)
			printf("%d",i);

	}
	putchar('\n');
	return 0;
}