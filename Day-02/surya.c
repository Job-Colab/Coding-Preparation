#include<stdio.h>
int a[100],n,sum,i;
int main()
{
 printf("enter no of  elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    printf("enter element %d:",i+1);
    scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     if(a[i]%2!=0)
     {
        sum+=a[i];
     }
 }
 printf("sum is:%d",sum);
}
