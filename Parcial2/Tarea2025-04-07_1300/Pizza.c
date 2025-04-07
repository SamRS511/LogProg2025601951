#include <stdio.h>

int main() {
    printf("Tenemos pizzas vegetarianas y no vegetarianas, 1 es vegetarianas y 2 no son vegetarianas\n");
    int Pizza;
    scanf("%d", &Pizza);

    if (Pizza == 1) {
        printf("Pizzas vegetarianas, tenemos 1 Pimienta o 2 Tofu\n");

        int opc;
        scanf("%d", &opc);

        if (opc == 1) {
            printf("\nTu pizza vegetariana contiene: Pimiento, mozzarella y salsa de tomate\n");
        } else if (opc == 2) {
            printf("\nTu pizza vegetariana contiene: Tofu, mozzarella y salsa de tomate\n");
        } else {
        printf("oki ");}

    } else if (Pizza == 2) {
        printf("Opciones no vegetarianas 1 Peperon  Jamón  Salmón\n");

        int OPC;
        scanf("%d", &OPC);

        if (OPC == 1) {
            printf("\nTu pizza no es vegetariana contiene: Peperoni, mozzarella y salsa de tomate\n");
        } else if (OPC == 2) {
            printf("\nTu pizza no es vegetariana contiene: Jamón, mozzarella y salsa de tomate\n");
        } else if (OPC == 3) {
            printf("\nTu pizza no es vegetariana contiene: Salmón, mozzarella y salsa de tomate\n");
        }
    } else {
        printf("\nOpción no válida. Debes elegir 1 o 2.\n");
    }

    return 0;
}
