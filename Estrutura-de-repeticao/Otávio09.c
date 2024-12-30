#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, soma;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    printf("Numeros perfeitos: ");
    for(int i = 1; i <= n; i++) {
        soma = 0;
        for(int j = 1; j < i; j++) {
            if(i % j == 0) {
                soma += j;
            }
        }
        if(soma == i) {
            printf("%d ", i);
        }
    }
    
    return 0;
    system("pause");
}
