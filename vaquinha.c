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
        printf("___________");
        printf("\n< ME GANHOU >");
        printf("\n-----------");
        printf("\n   o  ^__^ ");
        printf("\n    o (oo) _______");
        printf("\n      (__)(       )-´`´ ");
        printf("\n           ||----w |   ");
        printf("\n           ||     ||   ");
    }
    else
        printf("Perdeu T-U-D-O!!!\n");

    return EXIT_SUCCESS;
}
