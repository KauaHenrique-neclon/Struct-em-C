#include <stdio.h>
#include <stdlib.h>

//%s paraa conjutos de caracteres
//%d para numeros inteiros
//%c para caracteres simples
//%f para pontos flutuantes

int main(){
    typedef struct{
        char estado[30];
        char cidade[30];
        char bairro;
        int cep;
        char rua[20];
        int numero;
    } endereço;

    typedef struct{
        int ano;
        int mes;
        int dia;
    } data;

    struct ficha{
        int matricula;
        char nome[30];
        char disciplina;
        char sexo;

        endereço localização;
        data nascimento;
    };
    struct ficha aluno;

    int i;

    for(i = 0; i < 2;i++){
        printf("Digite matricula do aluno:");
        scanf("%d",&aluno.matricula);
        printf("Digite seu nome:");
        scanf("%s",&aluno.nome);
        printf("Digite sua disciplina");
        scanf("%s",&aluno.disciplina);
        printf("Digite seu sexo (F ou M)");
        scanf("%c",&aluno.sexo);
        printf("Digite o nome do seu estado:");
        scanf("%s",&aluno.localização.estado);
        printf("Digite o nome da sua cidade:");
        scanf("%s",&aluno.localização.cidade);
        printf("Digite o nome do seu bairro");
        scanf("%s",&aluno.localização.bairro);
        printf("Digite o seu cep");
        scanf("%d",&aluno.localização.cep);
        printf("Digite o nome da sua rua");
        scanf("%s",&aluno.localização.rua);
        printf("Digite o numero da casa");
        scanf("%d",&aluno.localização.numero);
        printf("Digite o dia do seu nascimento");
        scanf("%d",&aluno.nascimento.dia);
        printf("Digite o mes de seu nascimento");
        scanf("%d",&aluno.nascimento.mes);
        printf("Digite o ano do seu nascimento");
        scanf("%d",&aluno.nascimento.ano);

        printf("\n a matricula do aluno é: %d",aluno.matricula);
        printf("\n o nome do aluno é: %s",aluno.nome);
        printf("\n a disciplina do aluno é: %s",aluno.disciplina);
        printf("\n o sexo do aluno é:%c",aluno.sexo);
        printf("\n o estado do aluno é: %s",aluno.localização.estado);
        printf("\n a cidade do aluno é: %s",aluno.localização.cidade);
        printf("\n o bairro do aluno é: %s",aluno.localização.bairro);
        printf("\n o cep do aluno é:%d",aluno.localização.cep);
        printf("\n a rua do aluno é: %d",aluno.localização.rua);
        printf("\n o numero da casa do aluno é: %d",aluno.localização.numero);
        printf("\n o dia de nascimento do aluno é: %d",aluno.nascimento.dia);
        printf("\n o mes de nascimento do aluno é: %d",aluno.nascimento.mes);
        printf("\n o ano de nascimento do aluno é: %d",aluno.nascimento.ano);      
    };
    return 0;
};