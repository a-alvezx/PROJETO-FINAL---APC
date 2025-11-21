#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define MAX_FROTA 100

typedef struct{
    int id;
    char modelo[30];
    char placa[10];
    int km_atual;
    int km_ultima_revisao;
} Veiculo;

Veiculo frota[MAX_FROTA];
int totVeiculos = 0;

void barraCarregamento();
void pontosCarregamento();
void menu();
void cadastrarFrota();
void listarFrota();

int main()
{
    barraCarregamento();
    menu();
    return 0;
}

void barraCarregamento() {
    system("cls");
    printf ("\n\n\n  [Iniciando Banco de dados...]  \n\n");
    for (int i = 0 ; i <= 35 ; i++){
        printf ("%c", 219);
        Sleep(40);
    }
    Sleep (1000);
    system("cls");
    }

void pontosCarregamento(){
    int c = 0;
    while (c != 3) {
        for ( int i = 0 ; i < 3 ; i++){
            printf (".");
            fflush(stdout);
            Sleep(500);
        }
        printf ("\b\b\b   \b\b\b");
        fflush(stdout);
        Sleep (500);
        c++;
    }
}

void menu(){
    int opcao;
    do{
        system ("cls");
        printf("\n");
        printf("    ________          __  _____           \n");
        printf("   / ____/ /__  ___  / /_/ ___/__  _______ \n");
        printf("  / /_  / / _ \\/ _ \\/ __/\\__ \\/ / / / ___/ \n");
        printf(" / __/ / /  __/  __/ /_ ___/ / /_/ (__  )  \n");
        printf("/_/   /_/\\___/\\___/\\__//____/\\__, /____/   \n");
        printf("                            /____/        \n");
        printf("\nSISTEMA DE GESTAO DE FROTA E MANUTENCAO v1.0\n");
        printf ("\n======================================\n");
        printf(" 1. Cadastrar Veiculo\n");
        printf(" 2. Consultar Frota (Listar)\n");
        printf(" 0. Sair\n");
        printf("======================================\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);
        switch (opcao){
            case 1:
            cadastrarFrota();
            break;
            
            case 2:
            listarFrota();
            break;
            
            case 0:
            printf("Saindo...");
            break;

            default:
            printf ("\nOpcao Invalida!\n");
            system("pause");
        }
    } while (opcao != 0);
    
}

void cadastrarFrota(){
    system ("cls");
    

    if (totVeiculos >= MAX_FROTA){
        printf ("\n[!] Erro, Ocupação máxima atingida!\n");
        system("pause");
        return;
    }

    frota[totVeiculos].id = totVeiculos + 1;
    printf ("[!] Gerando o ID do veiculo");
    pontosCarregamento();
    
    //Modelo
    printf ("\nDigite o Modelo: ");
    getchar();
    fgets(frota[totVeiculos].modelo, 30, stdin);
    frota[totVeiculos].modelo[strcspn(frota[totVeiculos].modelo, "\n")] = 0; 

    //Placa
    printf ("\nDigite a Placa: ");
    fflush(stdin);
    fgets(frota[totVeiculos].placa, 10, stdin);
    frota[totVeiculos].placa[strcspn(frota[totVeiculos].placa, "\n")] = 0;

    //Km atual
    printf ("\nDigite o Km do Veiculo: ");
    scanf("%d", &frota[totVeiculos].km_atual);

    //Km revisão
    printf ("\nDigite o Km da ultima Revisao: ");
    scanf ("%d", &frota[totVeiculos].km_ultima_revisao);

    totVeiculos++;
    
    printf ("\n[!] Sucesso! Veiculo cadastrado! \n");
    system ("pause");
}

void listarFrota(){
    //Cabeçalho
    system ("cls");

    //

    if (totVeiculos == 0){
        printf("\n[!] Nenhum veiculo encontrado... \n");
        printf ("Registre um veiculo para poder continuar\n\n");
        system ("pause");
        return;
    }
    for ( int i = 0 ; i <= totVeiculos ; i++){
        printf ("   %-4d | %-15s | %-10s | %-10d |\n", frota[i].id, frota[i].modelo, frota[i].placa, frota[i].km_atual);
        fflush(stdout);
    }
    system("pause");
}

