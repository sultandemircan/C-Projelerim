#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullanýcýdan bir sayi girmesini isteyiniz ve if ilse kullanarak
    bu sayinin teklik çiftlik durumunu inceleyiniz.*/

    int sayi;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    if(sayi%2 == 0)
    {
        printf("%d sayisi çifttir.",sayi);
    }
    else if(sayi%2 == 1)
    {
        printf("%d sayisi tektir.",sayi);
    }











    return 0;
}
