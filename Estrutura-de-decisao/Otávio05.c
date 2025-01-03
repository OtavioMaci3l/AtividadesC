#include <stdio.h>

int main()
{
    int l1, l2, l3;
    
    printf("Digite os valores dos lados dos triangulos: \n");
    scanf("%d%d%d",&l1,&l2,&l3);
    
    if((l1+l2>l3)&&(l1+l3>l2)&&(l2+l3>l1)){
        
        if(l1==l2 && l2==l3){printf("Triangulo Equilatero");}
        else if(l1==l2 || l1==l3 || l2==l3){printf("Triangulo Isosceles");}
        else{printf("Triangulo Escaleno");}
        
    }else{printf("Triangulo invalido");}
    
    system("pause");
    return 0;
}