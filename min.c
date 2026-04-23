// Online C compiler to run C program online
#include <stdio.h>
void main() {
    int size;
    printf("enter no of elements to store:\n ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
        printf("enter the %d value\n",i+1);
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(int i=1;i<=size-1;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        printf("min=%d",min);
    }
}