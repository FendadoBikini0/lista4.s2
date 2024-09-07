#include <stdio.h>

int main(){
    int n1, n2;
    int *pn1 = &n1;
    int *pn2 = &n2;
    
    puts("Digite dois números para somá-los");
    scanf("%d%d",pn1,pn2);
    
    int soma = *pn1 + *pn2;
    
    int *s = &soma;
    puts("Resultado da soma:");
    printf("[%p]: %d",s,*s);
    

    return 0;
}