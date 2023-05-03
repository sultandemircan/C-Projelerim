#include <stdio.h>
#include <stdlib.h>

int main()
{
    //switch case kulllanarak dört iþlem örneklerini yapýnýz



    char op;
    float a;
    float b;
    printf("Lutfen operator giriniz\n");
    scanf("%c",&op);

    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case '+':printf("%.2f + %.2f = %.2f",a,b,a+b);
        break;
        case '-':printf("%.2f - %.2f = %.2f",a,b,a-b);
        break;
        case '/':printf("%.2f / %.2f = %.2f",a,b,a/b);
        break;
        case '*':printf("%.2f * %.2f = %.2f",a,b,a*b);
        break;
        default :printf("Gecersiz operator girdiniz");





    }






    return 0;
}
