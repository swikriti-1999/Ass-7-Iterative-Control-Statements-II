#include<stdio.h>
int main()
{
    int i,num1,num2,count=0;
    printf("\n enter frst number: ");
    scanf("%d",&num1);
    printf("\n enter second number: ");
    scanf("%d",&num2);
    for(i=1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        count++;
    }
    if(count==1)
        printf("\n Entered numbers are co-prime");
    else
        printf("\n Entered number are not co-prime");

return 0;
}