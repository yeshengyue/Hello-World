#include<stdio.h>
int main()
{
	int a[2000],n,i,k,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]); 
	
	for(i=0;i<n-1;i++)
	
	 {
	 	k=i;
	 	for(j=i+1;j<n;j++)
	 	 if (a[j]<a[k]){ 
		  k=j;
		  t=a[i];
		  a[i]=a[k];
		  a[k]=t; 
      } 
      } 
        for(i=0;i<n;i++)
	    printf("%d ",a[i]);


}
