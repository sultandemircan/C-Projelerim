#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullan�c�dan 2 adet say� ve isminin ba� harfini aliniz ilk sayim bu
    //2.say�m bu ve ismimim ba� harfi bu �eklinde ektana bast�r�n�z.

    float sayi1;
    float sayi2;
    char basharf;


    printf("Lutfen ilk sayiyi giriniz: \n ");
    scanf("%f",&sayi1);

    printf("Lutfen ikinci sayiyi giriniz: \n ");
    scanf("%f",&sayi2);

    printf("Lutfen isminizin bas harfini giriniz: \n ");
    scanf(" %c",&basharf);


    printf("Ilk sayim %f ,ikinci sayim %f ve ismimim basharfi %c",sayi1,sayi2,basharf);



    return 0;
}
