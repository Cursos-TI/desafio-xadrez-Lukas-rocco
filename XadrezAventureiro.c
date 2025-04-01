int main(){
    int t;
    int r = 1;
    int b = 1;
    int c ;
            //movimento Torre
        printf("A Torre andou:\n");

    for ( t = 0; t <= 5; t++) {
       printf ("Direita\n");
    }
    
           
        //Espaçar as linhas
        printf("\n");
    
        //movimento Rainha
        printf("A rainha andou\n");

    while (r <= 8)
    {
        printf("Esquerda\n");
        r++;
    }
        //Espaçar as linhas
        printf("\n");
        //Movimento Bispo
        printf("O bispo andou\n");
    do
    {
        printf("Cima direita\n");
        b++;
    } while (b <= 5);

        printf("\n");

        //movimento Cavalo
        printf("O Cavalo andou:\n");
    for(c = 1; c < 3;++c) {
       
        printf("Cima\n");
         int movimentocavalo;
         for (movimentocavalo = 2; movimentocavalo == c; movimentocavalo++)
         {
            printf("direita\n");
         }
         

    }




    return 0;
}