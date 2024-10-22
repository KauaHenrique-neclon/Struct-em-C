#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>


typedef struct {
    char nome[20];
    int cpf[11];
    struct{
        int dia[2];
        int mes[2];
        int ano[4];
    };
    struct {
        char cidade[15];
        char bairro[15];
        char rua[30];
    };
} dados_pessoais;
dados_pessoais dados;

int main(){
    setlocale(LC_ALL,"portuguese");
    printf("Digite o nome do aluno \n");
    scanf("%s", &dados.nome);
    printf("Digite o cpf do aluno \n");
    scanf("%d",&dados.cpf);
    printf("Digite o dia do nascimentto do aluno \n");
    scanf("%d",&dados.dia);
    printf("Digite o mes do nascimento do aluno \n");
    scanf("%d",&dados.mes);
    printf("Digite o ano de nascimento do aluno \n");
    scanf("%d",&dados.ano);
    return 0;
};