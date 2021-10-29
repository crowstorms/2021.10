#include<stdio.h>
main()
{
	int a[10][10]; 
	int m,n,i,j;
//scanf("%d%d",&m,&n);
	m=3,n=4;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) scanf("%d ",&a[i][j]);
		
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++) printf("%d ",a[i][j]);
		printf("\n");
	   }   
}
