#include<stdio.h>
#include<stdlib.h> 
int main() 
{
	float x;
	int a,b;
	printf("������һ��������:") ;
	scanf("%f",&x);
	a=x/1;
	b=(int)(x*1000)%1000;
	printf("��������Ϊ��%d С������Ϊ��%d\n",a,b);
	return 0;
 } 
