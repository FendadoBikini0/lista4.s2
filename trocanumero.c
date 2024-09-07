#include <stdio.h>

int main(){
    int n1, n2;
    int *pn1 = &n1;
    int *pn2 = &n2;
    
    puts("Digite o primeiro número");
    scanf("%d",pn1);
    
    puts("Digite o segundo número");
    scanf("%d",pn2);
    
    puts("Primeiro número digitado e seu endereço:");
    printf("[%p]: %d\n",pn1,*pn1);
    
    *pn1 = *pn2;
    
    puts("Número alterado com o mesmo endereço: ");
    printf("[%p]: %d",pn1,*pn1);
    

    return 0;
}