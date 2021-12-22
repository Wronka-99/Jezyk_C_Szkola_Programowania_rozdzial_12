/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tab=(int *)malloc(100*sizeof(int));
   

    for(int i=0; i<100;i++)
    {
        *(tab+i)=(float)rand()*10/__INT_MAX__;
        printf("Wartosc tablicy:%d \n", tab[i]);
    }

        
    free(tab);

    return 0;
}*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
    int l_slow=0;
    printf("Podaj liczbę slow. ");
    scanf("%d", &l_slow);
    char tmp[1024];
    char **tmp_tab;

    getchar();

    for(int index=0; index<l_slow; index++)
    {   
        fgets(tmp,1024,stdin);
        printf("Dlugosc znaku to: %ld \n", strlen(tmp));
        tmp_tab[index]=(char *)malloc(sizeof(char)*strlen(tmp));
        strcpy(tmp_tab[index],tmp);
        
    }

    puts("Oto wprowadzone slowa.");

    for(int index=0; index<l_slow; index++)
    {
        puts(tmp_tab[index]);
        free(tmp_tab[index]);
    }
    
    

    

    return 0;
}