#include<stdio.h>
main()
{  int n,a[50],i,j; 
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {  a[i]=1; 
   	for(j=i-1;j>0;j--) a[j]=a[j]+a[j-1];
   	for(j=0;j<=i;j++) printf("%d",a[j]);
   	printf("\n");
   }
}
//                i
//1               0
//1 1             1
//1 2 1           2
//1 3 3 1         3
//1 4 6 4 1       4
//1 5 10 10 5 1   5

