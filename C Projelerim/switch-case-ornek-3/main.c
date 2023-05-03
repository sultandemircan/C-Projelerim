#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Switch ile tek ve çift sayýyý bulan programý yazýnýz.

    int sayi;

    printf("Lutfen sayiyi giriniz:");
    scanf("%d",&sayi);

    switch(sayi%2)
    {
        case 0: printf("Girdiginiz sayi cifttir");
                break;

        case 1: printf("Girdiginiz sayi tektir");
                break;

        default: ("Gecersiz sayi girdiniz!");
    }







    return 0;
}
