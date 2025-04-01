#include <stdio.h>


void movimentotorre(int casas){
         
 if (casas > 0) {
    
    printf("Direita \n");
    movimentotorre(casas - 1);
 }  
}

void moverrainha(int casas){
          
 if (casas > 0) {
    
    printf("Esquerda \n");
    moverrainha(casas - 1);
 }  
}

void moverbispo(int casas){      
        
 if (casas > 0) {
    
    printf("Cima direita \n");
    moverbispo(casas - 1);
 }  
}


int main(){
    
    int c ;
   
     //movimento Torre
     printf("A Torre andou:\n");
    movimentotorre(5);
           
        //Espaçar as linhas
        printf("\n");

    //movimento Rainha
    printf("A rainha andou:\n");
    moverrainha(8);

        //Espaçar as linhas
        printf("\n");
       
        // Movimento Bispo
        printf("O bispo andou:\n");
    moverbispo(5);

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