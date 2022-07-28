#include<stdio.h>
int main()
{
    int n,count,j,i;
    printf("\n enter a value");
    scanf("%d",&n);
    printf("\n next prime number is: ");
    for(i=n+1;i>0;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        { 
            printf(" %d",i);
            break;
        }
    }
    return 0;
}