// Online C compiler to run C program online
#include <stdio.h>
   int output(int a,int sum)
   {
       if(a==0)
       {
           return sum;
       }
       int digit=a%10;
       sum=sum+digit;
       a=a/10;
       output(a,sum);
   }
   int main()
   {
       int a;
       printf("enter the  values");
       scanf("%d",&a);
       int res=output(a,0);
       printf("the sum of %d",res);
   return 0;
   }
