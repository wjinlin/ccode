#include<stdio.h>
int main() {
	//打印100~200之间的素数
	/*int i, j;
	for (i = 100; i <= 200; i++) 
	{
		for (j = 2; j < i; j++)
			if (i%j == 0)break;
		if (j>=i)
			printf("%d\n",i);
	}*/
	//输出乘法口诀表
	/*int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d\t",i,j,i*j);
			
		}
		printf("\n");
	}*/
	//判断1000年---2000年之间的闰年
	int a, b;
	for (a=1000;a<=2000;a++)
	{
		if (a % 4 == 0)
		{
			if (a % 100 != 0)
				printf("%d",a);
		}
		if (a % 400 == 0)
			printf("%d",a);
	}
	return 0;
}