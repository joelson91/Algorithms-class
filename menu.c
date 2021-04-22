#include <stdio.h>
void main(){
    int opt, esc;
    
    //Cardápio
    printf("====== Cardápio do dia ======");
    printf("\n 1 ..... Peixe ..... R$ 20,00");
    printf("\n 2 ..... Cobra ..... R$ 10,00");
    printf("\n 3 ..... Porco ..... R$ 5,00\n");
    printf("Digite aqui: ");
    scanf("%d", &opt);
    
    //Peixe
    if (opt == 1){
        printf("Você escolheu Peixe");
        printf("\nConfirmar o pedido?\n1 = Sim | 2 = Não\n");
        printf("Digite aqui: ");
        scanf("%d", &esc);
        if (esc == 1){
            printf("Seu pedido está a caminho");
        }else{
            printf("Tudo bem");
        }
    }
    
    //Cobra
    else if (opt == 2){
        printf("Você escolheu Cobra");
        printf("\nConfirmar o pedido?\n1 = Sim | 2 = Não\n");
        printf("Digite aqui: ");
        scanf("%d", &esc);
        if (esc == 1){
            printf("Seu pedido está a caminho");
        }else{
            printf("Tudo bem");
        }
    }
    
    //Lagarto
    else if (opt == 3){
        printf("Você escolheu Porco");
        printf("\nConfirmar o pedido?\n1 = Sim | 2 = Não\n");
        printf("Digite aqui: ");
        scanf("%d", &esc);
        if (esc == 1){
            printf("Seu pedido está a caminho");
        }else{
            printf("Tudo bem");
        }
    }
    
    //Mensagem de erro
    else{
        printf("\nOpção inválida");
    }
}
