#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,soma=0;
    for(i=1; i<=10; i++){
        scanf("%d",&n);
        soma+=n;
    }
    double media=soma/10;
    printf("Media dos numeros digitados: %.2f", media);
    return 0;
    system("pause");
}