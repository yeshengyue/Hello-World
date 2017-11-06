#include <stdio.h>
int count(int n)
{
	int i,j,c=0;
	for(i=1;i<=n;i++)
	{
		j=i;
		while(j!=0)
		{
			if (i%10==1)
			{
				c++;
			}
			j=j/10;
		}
	}
	return c;
} 
int main()
 {
 	int c,n;

 	scanf("%d",&n);
 	c=count(n);
 	printf("%d\n",c);
 }
