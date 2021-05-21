#include <stdio.h>
int main(){
    float p1, p2, TOTAL;
    int p;
    
    printf("Digite o código do produto");
    //Entrada de dados
    printf("\nLANCHE: ");
    scanf("%f", &p1);
    
    printf("\nBEBIDA: ");
    scanf("%f", &p2);
    
    //Verificação de VALIDADE 1
    if (p1 != 0 && p2 != 0){
        
        //Verificação de VALIDADE LANCHE
        if ((p1 == 100 || p1 == 103 || p1 == 104) && (p2 == 201 || p2 == 202 || p2 == 203)){
            
            //Verificação LANCHE
            if (p1 == 100){
                p1 = 2;
            }
            else if (p1 == 103){
                p1 = 3.5;
            }
            else if (p1 == 104){
                p1 = 5;
            }

            //Verificação BEBIDA
            if (p2 == 201){
                p2 = 3.5;
            }
            else if (p2 == 202){
                p2 = 3;
            }
            else if (p2 == 203){
                p2 = 2.5;
            }
            
            
            
            printf("\n\nQual forma de pagamento?\nDigite 1 para DINHEIRO ou 2 para CARTÃO:\n");
            scanf("%d", &p);
            
            if (p == 1){
                TOTAL = p1+p2;
                printf("\nTotal do pedido: R$ %.2f", TOTAL);
            }
            else if(p == 2){
                TOTAL = (p1+p2)*1.073;
                printf("\nTotal do pedido: R$ %.2f", TOTAL);
            }
            else{printf("\nERRO, TENTE NOVAMENTE");}
        }
            
        else{printf("\nERRO, TENTE NOVAMENTE");}
    }
    else{printf("\nERRO, TENTE NOVAMENTE");}
    return 0;
}
