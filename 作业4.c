#include <stdio.h>

int max(int x,int y)
{
	int t;
	t=x>y?x:y;
	return t; 
}
int main(void)
{
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("%d",max(a,b));
	
	}
