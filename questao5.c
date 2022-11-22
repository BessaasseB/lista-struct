#include <stdio.h>

typedef struct vetor{

    int a;
    int b;
    int c;

}vetor;

int main(void){

    vetor vetor[2];
    int a, b;

    vetor[0].a = 10;
    vetor[0].b = 2;
    vetor[0].c = 6;
    vetor[1].a = 11;
    vetor[1].b = 1;
    vetor[1].c = 9;

    a = vetor[0].a + vetor[0].b + vetor[0].c;
    b = vetor[1].a + vetor[1].b + vetor[1].c;

    printf("Soma de vetores: %d", a+b);

    return 0;
}
