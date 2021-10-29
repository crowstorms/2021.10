#include<stdio.h>
main()
{	int a[150]={2,4,6,8,10,15,1,18,17,34};
	int n,k,i;
	n=10;
//scanf("%d",&n);
//for(i=0;i<n;i++) scanf("%d",&a[i]);
	
	for(i=0;i<n;i++) printf("%d ",a[i]);
	k=6;
	for(i=k;i<n;i++) a[i]=a[i+1];
	n--;
	printf("\n");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	
}
