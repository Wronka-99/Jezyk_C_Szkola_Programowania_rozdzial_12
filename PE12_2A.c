#include "PE12_2A.h"

static int tryb=0;
static int dystans=0;
static float zuz_paliwo=0;


void wybierz_tryb(int tryb_pob)
{
    if(tryb_pob==1)
        tryb=tryb_pob;
    else if(tryb_pob==0)
        tryb=tryb_pob;
    else
        puts("Podaj liczbe 0 lub 1.");
}


void pobierz_dane()
{
    if(tryb==1)
    {
        printf("Podaj zuzycie paliwa w galonach: ");
        scanf("%f",&zuz_paliwo);
        printf("Podaj liczbe przejechanych mil: ");
        scanf("%d",&dystans);
        zuz_paliwo=dystans/zuz_paliwo;
    }
    else if(tryb==0)
    {
        printf("Podaj zuzycie paliwa w litrach: ");
        scanf("%f",&zuz_paliwo);
        printf("Podaj liczbe przejechanych kilometrow: ");
        scanf("%d",&dystans);
        zuz_paliwo/=0.01*dystans;
    }
}


void wyswietl_dane()
{
    if(tryb==1)
        printf("Zuzycie paliwa wynioslo %.2f mil na galon.", zuz_paliwo);
    else if(tryb==0)
        printf("Zuzycie paliwa wynioslo %.2f litrow na 100 km.", zuz_paliwo);
    
}