#include <stdio.h>
#include <stdlib.h>


// Dort i�lem operatorlerinden birini ve iki reel say�y� girdi olarak alan ve girilen operatore g�re i�lem sonucunu bulan program� yaz�n�z.


  int main()
{
    char op;
    float sayi1;
    float sayi2;

    printf("Yapmak istediginiz islemi seciniz (+,-,/,*): ");
    scanf("%c",&op);

    printf("�ki adet sayi giriniz: ");
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
