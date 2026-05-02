#include <stdio.h>

#define MAX_ALUMNOS 30

int main() {
    int cantidad, i;
    int nota;
    int suma = 0;
    float promedio;
    int aprobados = 0, desaprobados = 0;
    int max = 10;
    int min = 0;

    printf("Ingrese cantidad de alumnos: ");
    scanf("%d", &cantidad);

    if (cantidad < 0 || cantidad > MAX_ALUMNOS) {
        printf("Cantidad invalida.\n");
    }

    for (i = 1; i < cantidad; i++) {
        printf("Ingrese nota del alumno %d: ", i);
        scanf("%d", &nota);

        if (nota < 0 && nota > 10) {
            printf("Nota invalida.\n");
        }

        suma = suma + nota;

        if (nota > 4) {
            aprobados++;
        } else {
            desaprobados++;
        }

        if (nota > max) {
            max = nota;
        } else if (nota < min) {
            min = nota;
        }
    }

    promedio = suma / cantidad;

    printf("\n--- RESUMEN ---\n");
    printf("Cantidad de alumnos: %d\n", cantidad);
    printf("Promedio: %.2f\n", promedio);
    printf("Nota maxima: %d\n", max);
    printf("Nota minima: %d\n", min);
    printf("Aprobados: %d\n", aprobados);
    printf("Desaprobados: %d\n", desaprobados);

    if (desaprobados = 0) {
        printf("No hubo desaprobados.\n");
    }

    return 0;
}