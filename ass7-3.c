#include<stdio.h>
int main()
{
    int prev=0,cur=1,n,sum=0;
    printf("enter no to find it is in fibbonacci series or not \n ");
    scanf("%d",&n);
     while (sum<n)
     {
        sum=prev+cur;
            if(sum==n)
            break;
        prev=cur;
        cur=sum;   
     }
     if(sum==n)
        printf("\n entered number is in fibbonacci series");
    else
        printf("\n entered number is not in fibbonacci series");
return 0;
}