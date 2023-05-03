#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Girilen ayýn kaç günden oluþtuðunu bulan programý bulunuz.

    int ay;
    printf("Kacinci ay:");
    scanf("%d",&ay);

    switch(ay)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:printf("Girdiginiz ayda 31 gun bulunmaktadir.");
        break;

        case 4:
        case 6:
        case 8:
        case 10:
        case 12:printf("Girdiginiz ayda 30 gun bulunmaktadir.");
        break;

        default:printf("Girdiginiz ayda 28 veya 29 gun  bulunmaktadir.");

    }




    return 0;
}
