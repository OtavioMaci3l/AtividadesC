#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[3][3];
    int l, c, s = 0;

    printf("Digite os numeros da matriz 3x3: \n");
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            scanf("%d", &A[l][c]);
        }
    }

    for (l = 0; l < 3; l++) {
        s = s + A[l][l];
    }

    printf("\ns da diagonal principal = %d", s);
    
    return 0;
    system("pause");
}
