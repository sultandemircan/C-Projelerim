#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kullan�c�dan bir say� girmesini isteyiniz 1 den girece�i say�ya kadar olan say�lar�n toplam�n� for d�ng�s�yle hesaplay�n�z


    int i;
    int sayi;
    int toplam=0;

    printf("Lutfen bir sayi giriniz:\n");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++)
    {
        toplam=toplam+i;
    }

    printf("Toplam:%d",toplam);





    return 0;
}
