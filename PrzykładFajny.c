

#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
        char slowo1[10],slowo2[10],sloo3[100];
        int m;

        int nowyint=20000;
        printf("\n Podaj pierwsze slowo: ");
        scanf("%s",slowo1);
        strcpy(slowo2,slowo1);
        printf("\n Drugie slowo (kopia pierwszego): %s",slowo2);
        getch();
        return 0;
}


