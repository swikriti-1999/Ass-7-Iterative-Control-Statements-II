#include<stdio.h>
int main()
{
    int prev=0,cur=1,count=2,n,sum=0;
    printf("enter no of fibbonacci series u want to print \n ");
    scanf("%d",&n);
     printf(" 0 1");
     while ((count<n))
     {
        sum=prev+cur;
        printf(" %d",sum);
        prev=cur;
        cur=sum;
        count++;
     }
return 0;
}