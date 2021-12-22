#include "PE12_2A.h"


int main()
{
    int tryb;

    printf("Wybierz: 0 - system metryczny, 1 - system US: ");
    scanf("%d",&tryb);

    while(tryb>=0)
    {
        wybierz_tryb(tryb);
        pobierz_dane();
        wyswietl_dane();
        printf("Wybierz: 0 - system metryczny, 1 - system US: ");
        printf(" (-1 aby zakonczyc):");
        scanf("%d",&tryb);
    }

    puts("Koniec");

    return 0;
}