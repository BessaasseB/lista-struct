#include <stdio.h>
#include <string.h>


typedef struct veiculo{
    
    char marca[20], modelo[20], cor[15], motorizacao[50];
    int portas;

} veiculo;

veiculo veiculos[2];

void dataInput(){
    
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Informe a marca do veiculo %d: ", i+1);
        fgets(veiculos[i].marca, 20, stdin);
        printf("Informe o modelo do veiculo %d: ", i+1);
        fgets(veiculos[i].modelo, 20, stdin);
        printf("Informe a cor do veiculo %d: ", i+1);
        fgets(veiculos[i].cor, 15, stdin);
        printf("Informe a motorizacao do veiculo %d: ", i+1);
        fgets(veiculos[i].motorizacao, 50, stdin);
        printf("Informe a quantidade de portas do veiculo %d: ", i+1);
        scanf("%d", &veiculos[i].portas);
        fflush(stdin);
    }
    
}

void dataOutput(){

    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Marca do veiculo %d: %s",i+1, veiculos[i].marca);
        printf("Modelo do veiculo %d: %s",i+1, veiculos[i].modelo);
        printf("Cor do veiculo %d: %s",i+1, veiculos[i].cor);
        printf("Motorizacao do veiculo %d: %s",i+1, veiculos[i].motorizacao);
        printf("O veiculo %d possui &d portas: %s",i+1, veiculos[i].portas);
    }
    
}

int main(void){

    int opt, i;

    do{
        printf("ESCOLHA UMA OPCAO\n");
        printf("[1] Inserir dados\n");
        printf("[2] Mostrar dados\n");
        scanf("%d", &opt);
        fflush(stdin);

        switch (opt)
        {
        case 1:
            dataInput();
            break;

        case 2:
            dataOutput();
            break;

        default:
            break;
        }
    }while(opt == 1 || opt == 2);
        

    
    return 0;
}