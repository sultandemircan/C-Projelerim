#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x,&y);

    if(x>y){
        printf("%d is larger\n",x);
    }
    if(y>x){
        printf("%d is larger\n",y);
    }
    if(x==y){
        printf("These numbers are equal\n");
    }

    return 0;
}
