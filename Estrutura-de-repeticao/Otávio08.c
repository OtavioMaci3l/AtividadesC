#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, soma = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            soma += i;
        }
    }
    if(soma == n) {
        printf("O numero e perfeito");
    } else {
        printf("O numero nao e perfeito");
    }
    
    return 0;
    system("pause");
}
