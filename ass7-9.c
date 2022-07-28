#include<stdio.h>
int main()
{
    int n,num=0,p,temp,count=0,sum=0,rem,j;
    printf("Enter a number to check armstong : ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    num=n;
    while(n!=0)
    {
        rem=n%10;
        p=1;
        for(j=1;j<=count;j++)
        {
            p=p*rem;
        }
        sum=sum+p;
        n=n/10;
    }
    
    if(sum==num)
        printf("\n Number is Armstrong");
    else
        printf("\n Number is not armstrong");
return 0;
}