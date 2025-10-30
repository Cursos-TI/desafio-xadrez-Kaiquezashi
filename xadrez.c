#include <stdio.h>

    int main(){


            //Declaração dos itens.
        int i;
        int rainha = 0;
        int bispo = 0;

    for(i = 0; i < 5; i++){//Movimentação da torre para a direita.
        printf("A torre se move para a direita.\n");
    }//Comando "for" acaba sendo mais util, pois é mais direto ao ponto para este e outros movimentos que a peça possa fazer.


           while(rainha <= 10){//Movimentação da rainha para a esquerda.
                printf("\nA rainha se move para a esquerda.");
                rainha++;//Utilizando este comando para incrementar caracteres ate chegar ao limite.
                    if(rainha >= 5){
                        break;//limite para que seja repetida a informação.
                    }
           }
            

                    do{//Movimentação do bispo para a diagonal(cima, direita.)
                        printf("\n\nO bispo se move para cima.\n" , bispo); //Adicionei dois printf, pois não entendi se podia deixar tudo em um comando só.
                        printf("O bispo se move para direita." , bispo);//no caso, aparece 5 vezes a informação de que o bispo se meveu para CIMA e DIREITA!
                        bispo++;//Incremento
                        }while(bispo < 5); //Condição para que se repita a informação.


            return 0;

    }