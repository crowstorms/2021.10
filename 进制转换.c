#include<stdio.h>
main()
{  int n,a[40],p;
   scanf("%d",&n);
   p=0;
   while(n)
   {  a[p]=n%2;
   	  p++;
   	  n=n/2;
   }
   for(n=p-1;n>=0;n--) printf("%d",a[n]);
// for(p--;;p>=0;p--) printf("%d",a[p]); 另一种形式 
 } 
 
//8
//   n/2   n%2
//   4     0    a[0]
//   2     0    a[1]
//   1     0    a[2]
//   0     0    a[3]
