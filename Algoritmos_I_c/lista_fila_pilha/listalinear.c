#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h> // use apenas se estiver no Windows
// Definições de constantes
#define InicioArranjo 1 // primeiro elemento
#define MaxTam 5        // tamanho máximo do arranjo
// Definição do tipo apontador
typedef int Apontador; 
// Definição do tipo item
typedef struct {
    int cod;
    int idade;
} TipoItem;
// Definição do tipo lista
typedef struct {
    TipoItem Item[MaxTam];
    Apontador Primeiro;
    Apontador Ultimo;
} TipoLista;
// Função para inicializar a lista como vazia
void FLVazia(TipoLista *Lista) {
    Lista->Primeiro = 0;
    Lista->Ultimo = 0;
}
// Função para verificar se a lista está vazia
int Vazia(TipoLista Lista) {
    return (Lista.Primeiro == Lista.Ultimo);
}
// Função para inserir um elemento na lista
void insere(TipoItem x, TipoLista *Lista)
{
    if (Lista->Ultimo >= MaxTam)
    printf("\n A lista esta cheia!\n");
    else
    {
        Lista->Item[Lista->Ultimo] = x;
        Lista->Ultimo++;
    }
}
// Função para imprimir os elementos da lista
void imprime (TipoLista Lista)
{
    int aux;
    for (aux = Lista.Primeiro; aux < Lista.Ultimo; aux++)
    {
        printf(" \n Cod: %d\n Idade: %d\n\n\n", Lista.Item[aux].cod, Lista.Item[aux].idade);
    }
}
// Função para retirar um elemento da lista
void Retira(Apontador pos, TipoLista *Lista, TipoItem *x) {
    int i;
    // validar posição (pos é 1-based)
    if (Vazia(*Lista) || pos < 1 || pos > Lista->Ultimo) {
        printf("ERRO: Posicao invalida!\n");
        return;
    }
    // converter posicao para indice (0-based)
    int idx = pos - 1;
    // pegar o elemento retirado
    *x = Lista->Item[idx];
    printf("O elemento retirado foi o de codigo %d\n", x->cod);
    // deslocar elementos
    for (i = idx; i < Lista->Ultimo - 1; i++) {
        Lista->Item[i] = Lista->Item[i + 1];
    }
    Lista->Ultimo--;
}
void RetiraPos(Apontador pos, TipoLista *Lista, TipoItem *x) {
    int i; 
    // validar posicao (0-based)
    if (Vazia(*Lista) || pos < 0 || pos >= Lista->Ultimo) {
        printf("ERRO: Posicao invalida!\n");
        return;
    }
    *x = Lista->Item[pos];
    printf("O elemento retirado foi o de codigo %d\n", x->cod);

    for (i = pos; i < Lista->Ultimo - 1; i++) {
        Lista->Item[i] = Lista->Item[i + 1];
    }
    Lista->Ultimo--;
}
// Função de pesquisa linear
void Procura(TipoItem x, TipoLista Lista) 
{
    int i, encontrou = 0;

    for (i = Lista.Primeiro; i < Lista.Ultimo; i++) 
    {
        if (Lista.Item[i].cod == x.cod) 
        {
            encontrou = 1;
            printf("Codigo encontrado na posicao: %d\n", i + 1);
            break;
        }
    }
    if (!encontrou) 
    {
        printf("Codigo nao encontrado!\n");
    }
}
//PROGRAMA PRINCIPAL
int main() {

    TipoLista Lista;
    TipoItem x;
    Apontador pos;
    int opcao;
    int resposta;
    

    setlocale(LC_ALL, "Portuguese");

    FLVazia(&Lista); // inicializa a lista como vazia

    do {
        printf("\n=== MENU ===\n");
        printf("Digite a opcao desejada:\n");
        printf("0 - Sair\n");
        printf("1 - Esvaziar lista\n");
        printf("2 - Verificar se a lista esta vazia\n");
        printf("3 - Inserir elemento na lista\n");
        printf("4 - Imprimir elementos da lista\n");
        printf("5 - Retirar elemento (antes da posicao determinada)\n");
        printf("6 - Retirar elemento da lista\n");
        printf("7 - Pesquisar elemento na lista\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {                                                                                                                                                                                                                    
            case 0:
            {
                printf("Saindo...\n");
                break;
            }
            case 1:
            {
                FLVazia(&Lista);
                printf("Lista esvaziada.\n");
                break;
            }
            case 2:
            {
                resposta=Vazia(Lista);
                if (resposta==1)
                    printf("A lista esta vazia.\n");
                else
                    printf("A lista nao esta vazia.\n");
                break;
            }
            case 3:
            {
                printf("digite o codigo\n");
                scanf("%d", &x.cod);
                printf("digite a idade\n");
                scanf("%d", &x.idade);
                insere(x, &Lista);
                break;
            }
            case 4:
            {
                imprime(Lista);
                break;
            }
            case 5:
                printf("Digite a posicao: ");
                scanf("%d", &pos);
                Retira(pos, &Lista, &x);
                break;

            case 6:
                printf("Digite a posicao: ");
                scanf("%d", &pos);
                RetiraPos(pos, &Lista, &x);
                break;

            case 7:
                printf("Digite o codigo a pesquisar: ");
                scanf("%d", &x.cod);
                Procura(x, Lista);
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }

        printf("\nPressione qualquer tecla para continuar...");
        _getch(); // ou getchar() se não estiver no Windows
        system("cls"); // ou system("clear") no Linux
 
    } while (opcao != 0);

    return 0;
}