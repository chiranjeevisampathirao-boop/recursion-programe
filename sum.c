// Online C compiler to run C program online
#include <stdio.h>
   int output(int i,int n,int sum)
   {
       if(i>n)
       {
           return sum;
       }
       sum=sum+i;
       output(i+1,n,sum);
   }
   int main()
   {
       int m,n;
       printf("enter the start and end values");
       scanf("%d%d",&m,&n);
       int res=output(m,n,0);
       printf("the sum of %d",res);
   return 0;
   }
