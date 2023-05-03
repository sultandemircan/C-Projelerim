#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Kullanýcdan 3 adet sayi alinir en büyük sayiyi ilk baþta sadece if kullanarak
    daha sonra if else if yapisiyla bulan programi yaziniz.*/

    /*
    int sayi1;
    int sayi2;
    int sayi3;
    int largest;

    printf("Lutfen birinci sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("Lutfen ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);

    printf("Lutfen ucuncu sayiyi giriniz: ");
    scanf("%d",&sayi3);

    largest=sayi1;

    if(sayi2>largest){
        largest=sayi2;
    }

    if(sayi3>largest){
        largest=sayi3;
    }
    printf("En buyuk sayi: %d",largest);*/




    int sayi1;
    int sayi2;
    int sayi3;

    printf("Lutfen birinci sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("Lutfen ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);

    printf("Lutfen ucuncu sayiyi giriniz: ");
    scanf("%d",&sayi3);

    if(sayi1>sayi2 && sayi1>sayi3){
        printf("En buyuk sayi %d dir",sayi1);
    }
    else if(sayi2>sayi1 && sayi2>sayi3){
        printf("En buyuk sayi %d dir",sayi2);
    }
    else(sayi3>sayi1 && sayi3>sayi2);{
        printf("En buyuk sayi %d dir",sayi3);
    }




    return 0;
}
