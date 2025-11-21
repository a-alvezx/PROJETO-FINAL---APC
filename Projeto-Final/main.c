#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

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
            printf ("Op 1");
            break;
    
            case 2:
            printf("Op 2");
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



int main()
{
    barraCarregamento();
    menu();
    return 0;
}
