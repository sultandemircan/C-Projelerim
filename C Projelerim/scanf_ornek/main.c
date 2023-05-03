#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanýcýdan 2 adet sayý ve isminin baþ harfini aliniz ilk sayim bu
    //2.sayým bu ve ismimim baþ harfi bu þeklinde ektana bastýrýnýz.

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
