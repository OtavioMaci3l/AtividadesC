#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,vet[100];
    
    printf("Quantos numeros serao digitados: ");
    scanf("%d",&n);
    
    printf("Digite os numeros:\n");
    for(i=0; i<n; i++){
        scanf("\n%d",&vet[i]);
    }
    
    printf("\nOrdem inversa da sequencia de numeros digitados:");
    for(i=n-1; i>=0; i--){
        printf("\n%d",vet[i]);
    }
    
    return 0;
    system("pause");
}