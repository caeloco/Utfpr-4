#include <stdio.h>

void limpeza() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int numero2;
    int numero1;

    printf("Choose a number beetwen 102 to 105: ");
    scanf("%d", &numero1);

    printf("Now type any number: ");
    scanf("%d", &numero2);

    switch(numero1) {
        case 102: printf("Resultado: %d", numero2 * numero2);
            break;
        case 103: printf("Resultado: %d", numero2 * numero2 * numero2);
            break;
        case 104: printf("Resultado: %d", numero2 * numero2 * numero2 * numero2);
            break;
        case 105: printf("Resultado: %d", numero2 * numero2 * numero2 * numero2 * numero2);
            break;
    }

    return 0;
}