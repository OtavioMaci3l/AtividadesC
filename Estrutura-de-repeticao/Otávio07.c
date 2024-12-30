#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Divisores: ");

    for(int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
    system("pause");
}