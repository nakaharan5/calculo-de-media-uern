#include <stdio.h>

int main(){
    float media, n1, n2, n3;

    printf("Digite sua nota da primeira unidade: \n");
    scanf("%f", &n1);

    printf("Digite sua nota da segunda unidade: \n");
    scanf("%f", &n2);

    printf("Digite sua nota da terceira unidade: \n");
    scanf("%f", &n3);

    media= ((n1*4)+(n2*5)+(n3*6))/15;

    printf("Sua media eh: %.1f", media);

    return(0);
}
