#include <stdio.h>
#include <windows.h>

int main()
{


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
    
    return 0;
}
