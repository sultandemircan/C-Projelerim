#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullan�c�n�n ad� ve �ifresini en fazla 3 kez girebilece�i aksi halde hata alaca�� program

    int hata;
    int ksifre,kadi;

    do{
        printf("Kullanici adinizi giriniz:");
        scanf("%d",&kadi);
        printf("Sifrenizi giriniz: ");
        scanf("%d",&ksifre);
        hata++;

    }while(hata<3 && (kadi != 2375 || ksifre != 123456));

    if(hata>=3)
    {
        printf("Giris islemi basarisiz");
    }
    else
    {
        printf("Giris islemi basarili");
    }









    return 0;
}
