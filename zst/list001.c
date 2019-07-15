/*
1到100和
*/
#include <stdio.h>
int main(void)
{
	int i=1;
	int sum=0;
	/*do{
		sum=sum+i;
		i++;
	}while(i<=100)
	}*/
	
	while(i<=100){
		sum+=i++;
	}
	for (;i<=100;i++)
	{sum=sum+i;
		/* code */
	}
	}