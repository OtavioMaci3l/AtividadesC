#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, result, n, vet[37];
    
    for(result=0; result<37; result++){
        vet[result]=0;
    }
    
    printf("Quantas jogadas: ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        printf("Resultado da jogada: ",i+1);
        scanf("%d",&result);
        vet[result]+=1;
    }
    
    for(result=0; result<37; result++){
        printf("Frequencia do resultado %d = %.2f\n",result, (float)vet[result]);
    }
    
    
    return 0;
    system("pause");
}