# include<stdio.h>
int main()
{
	float a,b,c,t;
	printf("input 3 number:\n");
	scanf("%f%f%f",&a,&b,&c);
	if (a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if (a>c)
	{
		t=a;
		a=c;
		c=t;
		}	
	if (b>c)
	{
		t=b;
		b=c;
		c=t; 
	}	
	printf("the 3 number = %f%f%f",a,b,c);
}



