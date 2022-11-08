#include <stdio.h>
#include <string.h>

typedef struct DadosAluno{

    char nome[50];
    int idade;

}DadosAluno;

int main(void){

    DadosAluno aluno;

    printf("Informe o nome do aluno: ");
    fgets(aluno.nome, 50, stdin);

    printf("Informe a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("\nAluno: %sIdade: %d\n", aluno.nome, aluno.idade);


    return 0;
}