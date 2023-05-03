#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kullancýdan alýnan 5 adet sayýnýn ortalamasýný veren program

    int i,ort,sayi;
    int toplam=0;





    for(i=1;i<=5;i++)
    {
        printf("Lutfen sayi giriniz:");
        scanf("%d",&sayi);
        toplam+=sayi;
        ort=toplam/i;

    }

    printf("Ortalama= %d",ort);







    return 0;
}
