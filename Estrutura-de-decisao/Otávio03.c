#include <stdio.h>

int main() {
    
    int n1, n2;
    char op;
    
    printf("Escolha uma operacao aritmetica (+, -, *, /):\n");
    scanf(" %c", &op);
    
    printf("Digite 2 numeros:\n");
    scanf("%d%d", &n1, &n2);
    
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%d - %d = %d\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%d * %d = %d\n", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0) {printf("%d / %d = %.2f\n", n1, n2, (double)n1 / n2);}
            else {printf("Erro: Divisao por zero\n");}
            break;
        default:
            printf("Operacao invalida\n");
    }

    system("pause");
    return 0;
}
