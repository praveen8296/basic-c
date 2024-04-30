#include <stdio.h>
/*
Name:praveenkumar.b
date:01/05/2024
Description:write aprogramming for even and odd
input:
case1=12
case2=7
output:
case1=given number is 12 even number
case2=given number is 7  odd  number
*/
int main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("given number is %d even number",number);
     }
    else
    {
        printf("given number is %d odd number", number);
    }
    return 0;
}


