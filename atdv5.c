#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Contato {
    char nome[50];
    char numero[20];
};

int main() {
    struct Contato agenda[MAX_CONTATOS];
    int opcao;
    int numContatos = 0;
    int i; // Declare 'i' antes do loop

    do {
        printf("\nSelecione a opcao:\n");
        printf("1 - Adicionar um numero\n");
        printf("2 - Mostrar numeros cadastrados\n");
        printf("3 - Encerrar o software\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numContatos < MAX_CONTATOS) {
                    printf("\nDigite o nome: ");
                    scanf("%s", agenda[numContatos].nome);
                    printf("Digite o numero: ");
                    scanf("%s", agenda[numContatos].numero);
                    numContatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("Limite de contatos atingido!\n");
                }
                break;

            case 2:
                printf("\nNúmeros cadastrados:\n");
                if (numContatos > 0) {
                    for (i = 0; i < numContatos; i++) { // 'i' declarado aqui
                        printf("Nome: %s, Numero: %s\n", agenda[i].nome, agenda[i].numero);
                    }
                } else {
                    printf("Nenhum contato cadastrado.\n");
                }
                break;

            case 3:
                printf("Encerrando o software.\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}




