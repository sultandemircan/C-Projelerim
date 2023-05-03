#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    printf("Sum is %d\n", num1 + num2);
    printf("Product is %d\n", num1*num2);
    printf("Difference is %d\n", num1-num2);
    printf("Quotient is %d\n", num1/num2);
    printf("Remainder is %d\n",num1%num2);




    return 0;
}
