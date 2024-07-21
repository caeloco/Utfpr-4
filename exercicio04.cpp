#include <stdio.h>
#include <conio.h>

void limpeza() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char tecla;

    
    while(tecla != 27) { 
        printf("Esolha uma opcao \nF1 \nF2 \nF3 \nESC \n");
        tecla = getch();
        printf("%c", tecla);
        if(tecla == 27) {
          printf("saiu do sistema");
        }
    }

    

    return 0;
}