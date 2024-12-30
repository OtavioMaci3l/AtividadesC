#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, t1 = 0, t2 = 1, proximo;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    printf("Serie de Fibonacci: ");
    printf("0, 1");
    for(int i = 3; i <= n; i++) {
        proximo = t1 + t2;
        printf(", %d", proximo);
        t1 = t2;
        t2 = proximo;
    }
    
    return 0;
    system("pause");
}
