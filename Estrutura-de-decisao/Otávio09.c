#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite sua data de nascimento (dia, mes e ano):\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano < 1) {
        printf("A data de nascimento informada nao e valida.\n");
        system("pause");
        return 0;
    }

    if (mes < 1 || mes > 12) {
        printf("A data de nascimento informada nao e valida.\n");
        system("pause");
        return 0;
    }

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia < 1 || dia > 31) {
            printf("A data de nascimento informada nao e valida.\n");
            system("pause");
            return 0;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia < 1 || dia > 30) {
            printf("A data de nascimento informada nao e valida.\n");
            system("pause")
            return 0;
        }
    } else if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            if (dia < 1 || dia > 29) {
                printf("A data de nascimento informada nao e valida.\n");
                system("pause");
                return 0;
            }
        } else {
            if (dia < 1 || dia > 28) {
                printf("A data de nascimento informada nao e valida.\n");
                system("pause");
                return 0;
            }
        }
    }

    printf("A data de nascimento informada e valida.\n");
    system("pause");
    return 0;
}
