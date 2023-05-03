#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Switch ile sesli ve sessiz harfleri bulan programý yazdýrýnýz

    char harf;
    printf("Bir harf giriniz:");
    scanf("%c",&harf);

    switch(harf)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("Girdiginiz harf sesli harftir.");
        break;
        default:printf("Girdiginiz harf sessiz harftir.");

    }





    return 0;
}
