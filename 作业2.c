#include"stdio.h"
#include"math.h"
main()
{
	float a,b,c,x,y,u,m;
	printf("�������Ԫһ�η����е�������:a,b,c=");
	scanf("%f,%f,%f",a,b,c);
	if(a>0)
	{
		u=b*b-4*a*c;
		if(u>=0)
		{
			m=sqrt(u);
			x=(-b+m)/(2*a);
			y=(-b-m)/(2*a);
			printf("��һx����%4.2f,���y����%4.2f\n",x,y);
		}
		else
		printf("û�н�\n");
	}
	else printf("��ע��a>0!\n");
 }
