#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, menor, maior;
    scanf("%d",&n);
    menor=n;
    maior=n;
    for(i=1; i<=9; i++){
        scanf("%d",&n);
        if(n<menor){menor=n;}
        if(n>maior){maior=n;}
    }
    printf("\nMenor: %d\n", menor);
    printf("Maior: %d", maior);
    return 0;
    system("pause");
}