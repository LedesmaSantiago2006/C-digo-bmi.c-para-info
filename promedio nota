#include <stdio.h>

int main() {
    int estudiantes, i;
    float calificacion;
    float suma = 0, promedio;
    float mayor, menor;

    // Validar cantidad de estudiantes
    do {
        printf("Ingrese la cantidad de estudiantes: ");
        scanf("%d", &estudiantes);

        if (estudiantes <= 0) {
            printf("Error. Debe ingresar un numero positivo.\n");
        }

    } while (estudiantes <= 0);

    // Ingresar calificaciones
    for (i = 1; i <= estudiantes; i++) {

        do {
            printf("Calificacion del estudiante %d: ", i);
            scanf("%f", &calificacion);

            if (calificacion < 0 || calificacion > 100) {
                printf("Error. La calificacion debe estar entre 0 y 100.\n");
            }

        } while (calificacion < 0 || calificacion > 100);

        if (i == 1) {
            mayor = calificacion;
            menor = calificacion;
        } else {
            if (calificacion > mayor)
                mayor = calificacion;

            if (calificacion < menor)
                menor = calificacion;
        }

        suma += calificacion;
    }

    promedio = suma / estudiantes;

    printf("\nPromedio: %.2f\n", promedio);
    printf("Calificacion mas alta: %.2f\n", mayor);
    printf("Calificacion mas baja: %.2f\n", menor);

    return 0;
}
