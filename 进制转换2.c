#include<stdio.h>
main()
{  int n,a[40],p;
   scanf("%d",&n);
   p=0;
   while(n)
   {  a[p]=n%16;
   	  p++;
   	  n=n/16;
   }
   for(p--;p>=0;p--) 
     if (a[p]<10) printf("%d",a[p]); else
       printf("%c",a[p]-10+'A');
 } //把10进制数转换成16进制数 
