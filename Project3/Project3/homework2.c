#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//��������
	/*int a = 1;
	int b = 2;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d\n%d\n", a, b);*/
	//�����������������л���
	/*int a = 3;
	int b = 6;
		a = a + b;
		b = a - b;
		a = a - b;
		printf("%d\n%d",a,b);*/
		//��ʮ�����������ֵ
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int max = 0;
	//int i = 0;
	//while (i <= 9)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//	i++;
	//}
	//printf("ʮ�����������ֵΪ:%d", max);
	//return 0;
	int a, b, c,t;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d", a, b, c);
}