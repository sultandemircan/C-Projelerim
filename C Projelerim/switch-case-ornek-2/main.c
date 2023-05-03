#include <stdio.h>
#include <stdlib.h>


// Dort iþlem operatorlerinden birini ve iki reel sayýyý girdi olarak alan ve girilen operatore göre iþlem sonucunu bulan programý yazýnýz.


  int main()
{
    char op;
    float sayi1;
    float sayi2;

    printf("Yapmak istediginiz islemi seciniz (+,-,/,*): ");
    scanf("%c",&op);

    printf("Ýki adet sayi giriniz: ");
    scanf("%f%f",&sayi1,&sayi2);

    switch(op)
    {
        case '+': printf("Yapilacak islem: %c\n",op);
                  printf("Sonuc: %f + %f = %f",sayi1,sayi2,sayi1+sayi2);
                  break;

        case '-': printf("Yapilacak islem: %c\n",op);
                  printf("Sonuc: %f + %f = %f",sayi1,sayi2,sayi1-sayi2);
                  break;

        case '*': printf("Yapilacak islem: %c\n",op);
                  printf("Sonuc: %f + %f = %f",sayi1,sayi2,sayi1*sayi2);
                  break;

        case '/': printf("Yapilacak islem: %c\n",op);
                  printf("Sonuc: %f + %f = %f",sayi1,sayi2,sayi1/sayi2);
                  break;

        default :printf("Gecersiz deger ya da operator girdiniz!");

    }







    return 0;
}
