#include <stdio.h>
#include <string.h>

#define MAX 50

struct aluno{
  char nome[30];
  int RA;
  float notas[3];
  int freq;
};

// Insere um aluno e retorna a nova quantidade
int insereAluno(struct aluno turma[], int qtd)
{
    if (qtd >= MAX) {
        printf("Turma cheia!\n");
        return qtd; // retorna qtd sem alteração
    }
    
    printf("Nome: ");
    fgets(turma[qtd].nome, sizeof(turma[qtd].nome), stdin);
    turma[qtd].nome[strcspn(turma[qtd].nome, "\n")] = '\0'; // remove \n
    
    printf("RA: ");
    scanf("%d", &turma[qtd].RA);
    
    for (int j = 0; j < 3; j++) {
        printf("Nota %d: ", j + 1);
        scanf("%f", &turma[qtd].notas[j]);
    }
    
    printf("Frequencia: ");
    scanf("%d", &turma[qtd].freq);
    
    getchar(); // para consumir o '\n' após o último scanf
    return qtd + 1; // incrementa qtd e retorna
}

// Remove aluno pelo RA e retorna a nova quantidade
int removeAluno(struct aluno turma[], int qtd, int ra)
{
    for (int i = 0; i < qtd; i++) {
        if (turma[i].RA == ra) {
            // Move todos os alunos após o removido uma posição pra trás
            for (int j = i; j < qtd - 1; j++) {
                turma[j] = turma[j + 1];
            }
            return qtd - 1; // decrementa qtd e retorna
        }
    }
    return qtd; // RA não encontrado, qtd não muda
}

// Visualiza todos os alunos
void visualizarAlunos(struct aluno turma[], int qtd)
{
    if (qtd == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }
    
    for (int i = 0; i < qtd; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("  Nome: %s\n", turma[i].nome);
        printf("  RA: %d\n", turma[i].RA);
        printf("  Notas: %.2f, %.2f, %.2f\n", turma[i].notas[0], turma[i].notas[1], turma[i].notas[2]);
        printf("  Frequencia: %d\n", turma[i].freq);
        printf("--------------------------\n");
    }
}

// Busca aluno pelo RA
void buscarAluno(struct aluno turma[], int qtd, int ra)
{
    for (int i = 0; i < qtd; i++) {
        if (turma[i].RA == ra) {
            printf("Aluno encontrado:\n");
            printf("  Nome: %s\n", turma[i].nome);
            printf("  RA: %d\n", turma[i].RA);
            printf("  Notas: %.2f, %.2f, %.2f\n", turma[i].notas[0], turma[i].notas[1], turma[i].notas[2]);
            printf("  Frequencia: %d\n", turma[i].freq);
            return;
        }
    }
    printf("Aluno com RA %d nao encontrado.\n", ra);
}

int main()
{
    struct aluno turmaLP[MAX];
    int qtd = 0; // quantidade de alunos cadastrados
    int opcao;
    int ra;
    
    do {
        printf("\nMenu:\n");
        printf("1 - Inserir aluno\n");
        printf("2 - Remover aluno\n");
        printf("3 - Visualizar alunos\n");
        printf("4 - Buscar aluno pelo RA\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // para consumir '\n' do buffer
        
        switch(opcao) {
            case 1:
                qtd = insereAluno(turmaLP, qtd);
                break;
            case 2:
                printf("Digite o RA do aluno a remover: ");
                scanf("%d", &ra);
                getchar();
                {
                    int novaQtd = removeAluno(turmaLP, qtd, ra);
                    if (novaQtd < qtd) {
                        printf("Aluno removido com sucesso!\n");
                        qtd = novaQtd;
                    } else {
                        printf("Aluno com RA %d nao encontrado.\n", ra);
                    }
                }
                break;
            case 3:
                visualizarAlunos(turmaLP, qtd);
                break;
            case 4:
                printf("Digite o RA do aluno a buscar: ");
                scanf("%d", &ra);
                getchar();
                buscarAluno(turmaLP, qtd, ra);
                break;
            case 0:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
        
    } while(opcao != 0);
    
    return 0;
}
