#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){printf("O maior numero digitado é: %d",n1);}
    else if(n2>n1 && n2>n3){printf("O maior numero digitado é: %d",n2);}
    else if(n3>n2 && n3>n1){printf("O maior numero digitado é: %d",n3);}
    else{printf("Ambos os numeros digitados sao iguais");}
    system("pause");
    return 0;
}