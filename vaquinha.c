#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, y;
    x=0;
    y=0;

    printf("Digite dois números: ");
    scanf("%d", &x);
    scanf("%d", &y);

    if ( (x<50 && y<35) || (x>50 && y<90) || (x==50 && y<90) )
    {
        printf("Ganhou uma vaquinha!!\n");
        printf("_____________");
        printf("\n< Mûûûûûûûû >");
        printf("\n-----------");
        printf("\n   o  ^__^ ");
        printf("\n    o (oo) _______");
        printf("\n      (__)(       )-´`´ ");
        printf("\n           ||----w |   ");
        printf("\n           ||     ||   \n\n");
    }
    else
    {
        printf("Perdeu T-U-D-O!!!\n");
        printf(" _______________\n");
        printf("|               |\n");
        printf("| `    ´ `    ´ |\n");
        printf("|  `  ´   `  ´  |\n");
        printf("|   `´     `´   |\n");
        printf("|               |\n");
        printf("|       ´`      |\n");
        printf("|      ´  `     |\n");
        printf("|     ´    `    |\n");
        printf("|_______________|\n");
    }

    return EXIT_SUCCESS;
}
