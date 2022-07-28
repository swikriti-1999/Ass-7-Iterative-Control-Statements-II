#include<stdio.h>
int main()
{
    int n,q,count,rem,sum,k,p;
    printf("\n all armstrong number s are ");
    for(n=1;n<=1000;n++)
    {
        q=n;rem=0,sum=0;
        while (q!=0)
        {
            rem=q%10;
            sum=sum+rem*rem*rem;
            q=q/10;
        }
        if(sum==n)
        printf(" %d",n);
    }
return 0;
}

