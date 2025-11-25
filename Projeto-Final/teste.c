#include <stdio.h>
#include <windows.h>

int main()
{
int totVeiculos = 1;

     system ("cls");
    printf ("\n| ID    | MODELO          | PLACA      | KM         |\n");
    
    for ( int i = 0 ; i < totVeiculos ; i++){
        printf ("|  %-4d | %-15s | %-10s | %-10d |\n", 1, "2", "3", 4);
        fflush(stdout);
    }
    system("pause");

    return 0;
}
