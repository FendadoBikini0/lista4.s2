#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    int v[n];
    int *pv = v;
    
    
    puts("Defina o tamanho do seu vetor");
    scanf("%d",&n);
    
    //solicita ao usuário os valores do vetor
    puts("Agora preencha o seu vetor com os valores");
    for(int i=0; i<n; i++){
        scanf("%d",(pv+i));
    }
    
    //imprime o vetor com o respectivo endereço
    puts("Vetor com endereços");
    for(int k=0; k<n; k++){
        printf("[%p] %d\n",(pv+k),*(pv+k));
    }
    return 0;
}