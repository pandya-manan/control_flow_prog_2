#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    int reverse=0;
    int temp=number;
    while(temp>0)
    {
        int dig=temp%10;
        reverse=(reverse*10)+dig;
        temp=temp/10;
    }
    printf("The reverse of the number is %d",reverse);
    return 0;
}