#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    int max=(num1>num2)?num1:num2;
    while(1)
    {
        if(max%num1==0 && max%num2==0)
        {
            printf("The LCM of %d and %d is %d",num1,num2,max);
            break;
        }
        ++max;
    }
    return 0;
}