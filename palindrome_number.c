#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    int reverse=0;
    int temp=number;
    while(temp>0)
    {
        int dig=temp%10;
        reverse=(reverse*10)+dig;
        temp=temp/10;
    }
    if(reverse==number)
    {
        printf("The number %d is a palindrome number\n",number);
    }
    else
    {
        printf("The number %d is not a palindrome number\n",number);
    }
    return 0;
}