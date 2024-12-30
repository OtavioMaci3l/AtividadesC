#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, b, e, result;

    printf("Base: ");
    scanf("%d", &b);
    result=b;
    printf("Expoente: ");
    scanf("%d", &e);
    
    for(i=1; i<e; i++){
        result*=b;
    }
    
    printf("Resultado da exponenciacao: %d", result);
    
    return 0;
    system("pause");
}
