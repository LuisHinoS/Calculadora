#include <stdio.h>

int main()
{
    int Operação;
    float num1, num2, resultado;
    
    do{
        printf("selecione a operação a ser feita:\n");
        printf(" 1 - somar\n");
        printf(" 2 - subtrair\n");
        printf(" 3 - multiplicar\n");
        printf(" 4 - dividir\n");
        printf(" 5 - sair\n");
        
        printf("Operação:");
        scanf("%d", &Operação);
    
    switch (Operação) {
        case 1:
            printf("Digite 2 números: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 + num2;
            printf("Oresultado é: %.2f\n", resultado);
            break;
        
        case 2:   
            printf("Digite 2 números: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 - num2;
            printf("Oresultado é: %.2f\n", resultado);
            break;
            
        case 3:    
            printf("Digite 2 números: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 * num2;
            printf("Oresultado é: %.2f\n", resultado);
            break;
            
        case 4:   
            printf("Digite 2 números: ");
            scanf("%f %f", &num1, &num2);
            if (num2 == 0) {
                printf("Impossivel dividir por zero\n");
            } else {
            resultado = num1 / num2;
            printf("O resultado é: %.2f\n", resultado);
            break;
            }
        case 5:  
            printf("Finalizando...\n");
            break;
            
        default:
            printf("tem pão velho aqui não");
    }
    
      printf("\n");
    }while (Operação != 5);
    
}