#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, f=1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        f*=i;
    }
    
    printf("O fatorial de %d e: %d", n,f);
    return 0;
    system("pause");
}
