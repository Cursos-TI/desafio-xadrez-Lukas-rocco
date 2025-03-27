#include <stdio.h>

int main(){
    int t;
    int r = 1;
    int b = 1;

            printf("A Torre andou:\n");

    for ( t = 0; t <= 5; t++) {
       printf ("Direita\n");
    }
    
            printf("A rainha andou\n");

    while (r <= 8)
    {
        printf("Esqueda\n");
        r++;
    }
        printf("O bispo andou\n");
    do
    {
        printf("Cima direita\n");
        b++;
    } while (b <= 5);
    





    return 0;
}