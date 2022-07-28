#include<stdio.h>
int main()
{
    int n,prev=0,cur=1,sum=0;
    printf("\n enter thn nth value");
    scanf("%d",&n);
    printf("0 1");
    while(sum<n)
    {
        sum=prev+cur;
        if(sum>n)
           break;
        else
            printf(" %d",sum);
        prev=cur;
        cur=sum;
    }
return 0;
} 

