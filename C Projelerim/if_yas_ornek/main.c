#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kiþinin seçimlerde yasal olarak oy kullanýp kullanamayacagini belirten programi yaziniz.*/

    int yas;

    printf("Lutfen yasinizi giriniz:");
    scanf("%d",&yas);

    if(yas>=18)
    {
        printf("Oy kullanabilirsiniz");
    }
    else if(yas>0 && yas<18)
    {
        printf("Yasiniz 18'den kucuk oldugu icin oy kullanmazsiniz");
    }
    else
    {
        printf("Gecersiz deger girdiniz.");
    }



    return 0;
}
