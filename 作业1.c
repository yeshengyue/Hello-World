#include<stdio.h>
#include<stdlib.h> 
int main() 
{
	float x;
	int a,b;
	printf("请输入一个浮点数:") ;
	scanf("%f",&x);
	a=x/1;
	b=(int)(x*1000)%1000;
	printf("整数部分为：%d 小数部分为：%d\n",a,b);
	return 0;
 } 
