#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, cres = 1, total, ant;

    printf("Quantos numeros: ");
    scanf("%d", &total);
    scanf("%d", &ant);

    for(i=1; i<total; i++){
        scanf("%d", &n);
        if (n < ant) {cres = 0;}
        ant = n;
    }
    
    cres==1?printf("Os numeros estao em ordem crescente\n"):printf("Os numeros nao estao em ordem crescente\n");
    return 0;
    system("pause");
}
