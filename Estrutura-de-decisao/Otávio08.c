#include <stdio.h>

int main() {
    
    int i;
    printf("Digite sua idade:\n");
    scanf("%d", &i);

    if (i >= 18 && i <= 67) {
        printf("Voce pode doar sangue.\n");
    } else {
        printf("Voce nao pode doar sangue.\n");
    }

    system("pause");
    return 0;
}
