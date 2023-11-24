#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char disciplinas[3][200];
    float notas[3][3];
    float media[3];
    float somaNotas = 0;
    char nomes[3][50];
    int idades[3];
    int i, j, peso[3] = {3, 3, 4};

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf("\nInsira o nome do aluno: ");
        scanf("%s", nomes[i]);

        printf("Insira a idade do aluno: ");
        scanf("%d", &idades[i]);

        printf("\nInsira o nome da disciplina: ");
        getchar(); // Limpa o buffer do teclado antes de ler a pr�xima string
        fgets(disciplinas[i], sizeof(disciplinas[i]), stdin);

        for (j = 0; j < 3; j++)
        {
            printf("Insira a nota %d do aluno: ", j + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j] * peso[j];
        }
        fflush(stdin);
        media[i] = somaNotas / 10;
        somaNotas = 0;

        // Verifica��o da situa��o do aluno
        if (media[i] >= 7.0)
        {
            printf("Situa��o: Aprovado[3]\n");
        }
        else if (media[i] >= 5.0)
        {
            printf("Situa��o: Recupera��o[3]\n");
        }
        else
        {
            printf("Situa��o: Reprovado[3]\n");
        }
    }

    system("cls || clear");

    printf("\nExibindo as informa��es dos alunos e das disciplinas...\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nAluno: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Disciplina: %s", disciplinas[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Nota %d: %.1f\n", j + 1, notas[i][j]);
        }

        printf("M�dia: %.1f\n", media[i]);
    }

    return 0;
}
