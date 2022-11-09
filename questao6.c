#include <stdio.h>
#include <string.h>

typedef struct endereco {
    char rua[10], bairro[10], cep[8], cidade[30], estado[30];
   
} endereco;

typedef struct cadastro {
    char nome[20], rg[10], cpf[10], estadoCivil[10], tel[10], sexo;
    int idade;
    float salario[12];
    endereco end;

} cadastro;

int main(void){

    cadastro clientes[5];
    int i, maiorIdade;

    for(i=0; i<5; i++){

        printf("Digite o nome: ");
        fgets(clientes[i].nome, 20, stdin);

        printf("Digite o CPF: ");
        fgets(clientes[i].cpf, 20, stdin);

        printf("Digite o RG: ");
        fgets(clientes[i].rg, 20, stdin);

        printf("Informe o salario: ");
        scanf("%f", &clientes[i].salario);
        fflush(stdin);
        printf("Informe o sexo: ");
        scanf("%c", &clientes[i].sexo);
        fflush(stdin);
        printf("Digite A idade: ");
        scanf("%d", &clientes[i].idade);
        fflush(stdin);
        printf("Digite o Estado civil: ");
        fgets(clientes[i].estadoCivil, 20, stdin);
        fflush(stdin);
        printf("Digite o telefone: ");
        fgets(clientes[i].tel, 20, stdin);
        fflush(stdin);
        printf("Digite o CEP: ");
        fgets(clientes[i].end.cep, 8, stdin);
        fflush(stdin);
        printf("Digite o estado: ");
        fgets(clientes[i].end.estado, 30, stdin);
        fflush(stdin);
        printf("Digite o cidade: ");
        fgets(clientes[i].end.cidade, 30, stdin);
        fflush(stdin);
        printf("Digite o bairro: ");
        fgets(clientes[i].end.bairro, 10, stdin);
        fflush(stdin);
        printf("Digite a rua: ");
        fgets(clientes[i].end.rua, 10, stdin);
        fflush(stdin);
        printf("\n");
    }

    maiorIdade = 0;

    for(i=0; i<5; i++){
        if(clientes[i].idade > maiorIdade){
            maiorIdade = clientes[i].idade;
        }

        if(clientes[i].sexo == 'm'){
            printf("O cliente %d e do sexo masculino\n", i);
        }

        if(clientes[i].salario > 1000){
            printf("O cliente %d tem o salario maior que 1000\n");
        }
    }
    
    int busca;

    printf ("Qual identidade esta buscando :");
    scanf("%d",&busca);

    for ( i = 0; i < 5; i++)
    {
      if (busca == clientes[i].rg)
      {
        printf("A Pessoa %d e a que vc busca com a identidade de %d",i,clientes[i].rg);
      }
      
    }



}