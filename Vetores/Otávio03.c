#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, acima;
    float t[7], s, m;

    puts("Informe as temperaturas: ");
    for (i = 0; i < 7; i++) {
        printf("%d dia? ", i + 1);
        scanf("%f", &t[i]);
    }

    s = 0;
    for (i = 0; i < 7; i++) {
        s += t[i];
    }

    m = s / 7.0;
    printf("Media: %.2f\n\n", m);

    acima = 0;
    for (i = 0; i < 7; i++) {
        if (t[i] > m) {
            acima++;
        }
    }

    printf("%d dias com teratura acima da media\n\n", acima);

    system("pause");
    return 0;
}
