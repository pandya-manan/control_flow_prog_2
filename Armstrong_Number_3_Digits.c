#include<stdio.h>

int main()
{
    int num;
    printf("Enter a three digit number\n");
    scanf("%d",&num);
    int temp=num;
    int prod=0;
    while(num>0)
    {
        int dig=num%10;
        prod=(prod)+(dig*dig*dig);
        num=num/10;
    }
    if(temp==prod)
    {
        printf("The number %d is an Armstrong Number",temp);
    }
    else
    {
        printf("The number %d is not an Armstrong Number",temp);
    }
    return 0;
}