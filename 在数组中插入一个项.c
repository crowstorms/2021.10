#include<stdio.h>
main()
{	int a[150]={2,4,6,8,10,15,1,18,17,34};
	int n,k,i;
	n=10;
//scanf("%d",&n);
//for(i=0;i<n;i++) scanf("%d",&a[i]);
	
	for(i=0;i<n;i++) printf("%d ",a[i]);

	k=8;
	for(i=n;i>k;i--) a[i]=a[i-1];
	n++;
	a[8]=0;
	
	printf("\n");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	
}
