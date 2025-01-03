#include <stdio.h>

int main() {
    int n1, n2, n3, n;

    printf("Digite tres numeros inteiros distintos:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2) { 
        n = n1; 
        n1 = n2; 
        n2 = n; 
    }
    if (n1 > n3) { 
        n = n1; 
        n1 = n3; 
        n3 = n; 
    }
    if (n2 > n3) { 
        n = n2; 
        n2 = n3; 
        n3 = n; 
    }

    printf("\nOs numeros em ordem crescente sao: %d %d %d\n", n1, n2, n3);

    system("pause");
    return 0;
}
