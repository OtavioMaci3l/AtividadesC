#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d%d",&n1,&n2);
    if(n1>n2){printf("O maior numero digitado é: %d",n1);}
    else if (n2>n1){printf("O maior numero digitado é: %d",n2);}
    else{printf("Ambos os numeros digitados sao iguais");}
    system("pause");
    return 0;
}