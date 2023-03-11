#include <stdio.h>

int main() {
    int dia;
    printf("Introduce un numero del 1 al 7 para representar el dia de la semana: ");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("El dia %d es laborable\n", dia);
            break;
        case 6:
        case 7:
            printf("El dia %d es no laborable\n", dia);
            break;
        default:
            printf("Dia invalido\n");
    }

    return 0;
}
