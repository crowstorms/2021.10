#include<stdio.h>
main()
{	int a[150]={2,-4,-6,8,10,-15,1,85,-67,18,-17,-34};
	int n,k,i,j; 
	n=12;
//scanf("%d",&n);
//for(i=0;i<n;i++0 scanf("%d",&a[i]);
	for(i=0;i<n;i++) printf("%d ",a[i]);
//ÅúÁ¿É¾³ý
	j=0;
	for(i=0;i<n;i++)
		if(a[i]>=0)
		{
			a[j]=a[i];
			j++;
		 } 
	n=j;
	printf("\n");
	for(i=0;i<n;i++) printf("%d ",a[i]); 
	
	
	
}
