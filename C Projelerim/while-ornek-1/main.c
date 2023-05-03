#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Bir sayý giriniz: 100
    100
    200
    300
    400
    500
    600
    700
    800
    900
    1000*/

    int i;
    int sayi;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    i= 1;
    while(i<=10)
    {
        printf("%d\n",sayi*i);
        i++;
    }





    return 0;
}
