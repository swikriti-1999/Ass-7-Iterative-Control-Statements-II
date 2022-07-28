#include<stdio.h>
int main()
{
    int i,num1,num2,count,j;
    printf("\n Enter frst number : ");
    scanf("%d",&num1);
    printf("\n Enter second number : ");
    scanf("%d",&num2);
    printf("\n all prime numbers between %d and %d are : ",num1,num2);
    for(i=num1+1;i<=num2-1;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
            printf(" %d",i);
    }  
return 0;
}