#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

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
        getchar();
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

        // Verificação da situação do aluno
        if (media[i] >= 7.0)
        {
            printf("Situação: Aprovado\n");
        }
        else if (media[i] >= 5.0)
        {
            printf("Situação: Recuperação\n");
        }
        else
        {
            printf("Situação: Reprovado\n");
        }
    }

    system("cls || clear");

    printf("\nExibindo as informações dos alunos e das disciplinas...\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nAluno: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Disciplina: %s", disciplinas[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Nota %d: %.1f\n", j + 1, notas[i][j]);
        }

        printf("Média: %.1f\n", media[i]);
    }

    return 0;
}


