#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main ()
{
    int x,y;
    x=0;
    y=0;

    printf("Digite dois números: ");
    scanf("%d", &x);
    scanf("%d", &y);


    if( (x<50 && y<35) || (x>50 && y<90) || (x==50 && y<90))
        printf("Ganhou uma vaquinha!!\n");
    else
        printf("Perdeu Tudo!!\n");
    
    return EXIT_SUCCESS;
}
