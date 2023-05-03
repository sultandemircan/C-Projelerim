#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kullanýcýdan bir sayý girmesini isteyiniz 1 den gireceði sayýya kadar olan sayýlarýn toplamýný for döngüsüyle hesaplayýnýz


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
