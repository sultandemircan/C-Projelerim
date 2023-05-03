#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullanicidan 2 adet sayi aliniz ve buyukluk kucukluk durumuna gore ekrana bastiriniz*/

    int sayi1;
    int sayi2;

    printf("Lutfen iki adet sayi giriniz:");
    scanf("%d%d",&sayi1,&sayi2);

    if(sayi1>sayi2)
    {
        printf("%d sayisi %d sayisindan buyuktur",sayi1,sayi2);
    }
    else if(sayi2>sayi1)
    {
        printf("%d sayisi %d sayisindan buyuktur",sayi2,sayi1);
    }
    else if(sayi2==sayi1)
    {
        printf("%d sayisi %d sayisina esittir",sayi2,sayi1);
    }


    return 0;
}
