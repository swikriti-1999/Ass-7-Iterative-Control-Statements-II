#include<stdio.h>
int main()
{
    int i,num1,num2,HCF;
    printf("\n enter frst number: ");
    scanf("%d",&num1);
    printf("\n enter second number: ");
    scanf("%d",&num2);
    for(i=1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        break;
    }
    HCF=num1*num2/i;
    printf("\n HCF od 2 number is : %d",HCF);
return 0;
}