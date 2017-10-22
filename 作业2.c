#include"stdio.h"
#include"math.h"
main()
{
	float a,b,c,x,y,u,m;
	printf("请输入二元一次方程中的三个数:a,b,c=");
	scanf("%f,%f,%f",a,b,c);
	if(a>0)
	{
		u=b*b-4*a*c;
		if(u>=0)
		{
			m=sqrt(u);
			x=(-b+m)/(2*a);
			y=(-b-m)/(2*a);
			printf("解一x等于%4.2f,解二y等于%4.2f\n",x,y);
		}
		else
		printf("没有解\n");
	}
	else printf("请注意a>0!\n");
 }
