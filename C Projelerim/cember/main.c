#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radius;

    printf("Input the circle radius: ");
    scanf("%d",&radius);

    printf("The diameter is  :%d \n",2*radius);
    printf("The circumference is : %d \n", 2*3*radius);
    printf("The area is: %d \n", 3 * radius * radius);


    return 0;
}
