#include <stdio.h>
int main(){
    int a, b, c;
    
    //Entrada de dados
    printf("Digite os lados do triângulo:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    //Teste de existência
    if ((a<=b+c)&&(b<=c+a)&&(c<=a+b)&&((a&&b&&c)>0)){
        printf("Os lados formam um triângulo\n");
        
        //Lados iguais
        if ((a==b)&&(b==c)&&(c==a)){
            printf("É um triângulo Equilátero");
        }
        
        //Lados diferentes
        else if ((a!=b)&&(b!=c)&&(c!=a)){
            printf("É um triângulo Escaleno");
        }
        
        //Dois lados iguais
        else {
            printf("É um triângulo Isóceles");
        }
    }
    
    //Resultado falso
    else{
        printf("Não é um triângulo");
    }

    return 0;
}