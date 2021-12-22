/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rzutkosc.h"



int main()
{
    int rzuty=0;
    int wynik=0;
    int scianki=0;
    int status=0 ;

    srand((unsigned int) time(0));
    printf("Podaj liczbe scianek, 0 oznacza koniec.\n");

    while(scanf("%d",&scianki)==1&&scianki>0)
    {
        printf("Ile rzutow?\n");

        if((status = scanf("%d",&rzuty))!=1)
        {
            if(status = EOF)
                break;
            else
            {
                printf("Nalezy podac liczbe calkowita.");
                printf("Sprobujmy jeszcze raz.\n");

                while(getchar()!='\n')
                    continue;
                
                printf("Ile scianek? 0 oznacza koniec.\n");
                continue;
            }
        }

        wynik=rzucaj_n_razy(rzuty,scianki);
        printf("Wyrzucono razem %d uzywajac %d %d - sciennych kosci.\n",wynik, rzuty, scianki);
        printf("Podaj liczbe sianek, 0 oznacza koniec.\n");
    }

    printf("Funkcja rzucaj() zostala wywolana %d razy.\n",liczba_rzutow);
    printf("Zycze duzo szczescia.\n");


    return 0;
}
*/

/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *wsk;
    int max=0;
    int liczba;
    int i=0;

    puts("Podaj maksymalna liczbe elementow (typu double):");

    if(scanf("%d", &max)!=1)
    {
        puts("Niepoprawna liczba, do widzenia.");
        exit(EXIT_FAILURE);
    }

    wsk=(double *)malloc(max*sizeof(double)); 
    //malloc przesukuje pamiec komputera w celu znalezienia bloku pamieci o okreslonej liczbie bajtow
    //rzutowanie maloca jest opcjonalne, ponieważ zwraca wskaznik typu void, jednak rzutowanie
    //jest wymagane w przypadku jezyka C++. W przypadku nie zadzialania funkcji malloc zwraca
    //wskaznik typu NULL.
    if(wsk==NULL)
    {
        puts("Przydzial pamieci nie powiodl sie.");
        exit(EXIT_FAILURE);
    }

    puts("Podaj elementy (k to konie):\n");
    
    while(i < max && scanf("%lf",&wsk[i])==1)
        ++i;

    printf("Oto %d wprowadzonych elementow:\n", liczba = i);

    for(i=0;i<liczba;i++)\
    {
        printf("%7.2f",wsk[i]);
        if(i%7==6)
            putchar('\n');
    }

    if(i%7 != 0)
        putchar('\n');
    puts("Koniec.");
    free(wsk);

    return 0;
    

}*/



