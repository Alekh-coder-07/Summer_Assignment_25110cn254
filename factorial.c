#include<stdio.h>
int main()
{
    int i=1,number,result=1;
    printf("Enter any number");
    scanf("%d",&number);
    for(i =1;i<=number;i=i+1)
    {
    result=result*i;
    }
    printf("Factorial of given number is=%d",result);
    return 0;
}