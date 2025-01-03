#include <stdio.h>

int main() {
    
    char c;
    scanf("%c",&c);
    
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){printf("eh do alfabeto");}
    else{printf("nao eh do alfabeto");}

    system("pause");
    return 0;
}
