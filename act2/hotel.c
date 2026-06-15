#include <stdio.h>

// Constantes
float IVA = 0.16;
float impuesto = 0.12;
float costo_sen = 1050.50;
float costo_suite = 1500.75;
float costo_doble = 850.25;

int main()
{
    // Variables y acumuladores
    // Contador de habitaciones por tipo
    int sen_acum, suite_acum, doble_acum;
    sen_acum = suite_acum = doble_acum = 0;
    // Acumuladores del total por habitacion
    float sen_total, suite_total, doble_total, subtotal, total;
    ;
    sen_total = suite_total = doble_total = subtotal = total = 0.0;
    int tipo_habitacion, noches, num_habitaciones, num_huespedes, num_personas;
    tipo_habitacion = noches = num_habitaciones = num_huespedes = num_personas = 0;

    // Ciclo de los 30 dias
    for (int i = 0; i < 2; i++)
    {
        printf("-------DIA %d-------\n", i + 1);
        printf("Ingresa el numero de huespedes\n");
        scanf("%d", &num_huespedes);

        // Ciclo por cada huesped
        for (int h = 0; h < num_huespedes; h++)
        {
            printf("-------HUESPED %d-------\n", h + 1);
            printf("Ingresa el tipo de habitacion\n 1)Sencilla\n 2)Doble\n 3)Suite\n");
            scanf("%d", &tipo_habitacion);

            printf("Ingresa el numero de personas\n");
            scanf("%d", &num_personas);

            noches = (rand() % 30) + 1; // Numero aleatorio de noches entre 1 y 30
            printf("El numero de noches es: %d\n", noches);

            // Habitacion sencilla
            if (tipo_habitacion == 1)
            {
                sen_acum++;
                subtotal = costo_sen * noches;
                printf("Subtotal: %.2f\n", subtotal);
                printf("IVA: %.2f\n", subtotal * IVA);
                printf("Impuesto: %.2f\n", subtotal * impuesto);
                total = subtotal + (subtotal * IVA) + (subtotal * impuesto);
                sen_total += total; // Acumular el total de habitaciones sencillas
                printf("Total: %.2f\n", total);
            }
            // Habitacion doble
            else if (tipo_habitacion == 2)
            {
                doble_acum++;
                subtotal = costo_doble * noches;
                total = subtotal + (subtotal * IVA) + (subtotal * impuesto);
                doble_total += total; // Acumular el total de habitaciones dobles
                printf("Subtotal: %.2f\n", subtotal);
                printf("IVA: %.2f\n", subtotal * IVA);
                printf("Impuesto: %.2f\n", subtotal * impuesto);
                printf("Total: %.2f\n", total);
            }
            // Habitacion suite
            else if (tipo_habitacion == 3)
            {
                suite_acum++;
                subtotal = costo_suite * noches;
                printf("Subtotal: %.2f\n", subtotal);
                printf("IVA: %.2f\n", subtotal * IVA);
                printf("Impuesto: %.2f\n", subtotal * impuesto);
                total = subtotal + (subtotal * IVA) + (subtotal * impuesto);
                suite_total += total; // Acumular el total de habitaciones suite
                printf("Subtotal: %.2f\n", subtotal);
                printf("Total: %.2f\n", total);
            }
            total = 0;    // Reiniciar total para el siguiente huesped
            subtotal = 0; // Reiniciar subtotal para el siguiente huesped
        }
    }
    printf("-------RESUMEN DEL MES-------\n");
    printf("Habitaciones sencillas vendidas: %d\n", sen_acum);
    printf("Habitaciones dobles vendidas: %d\n", doble_acum);
    printf("Habitaciones suite vendidas: %d\n", suite_acum);
    printf("Total recaudado en habitaciones sencillas: %.2f\n", sen_total);
    printf("Total recaudado en habitaciones dobles: %.2f\n", doble_total);
    printf("Total recaudado en habitaciones suite: %.2f\n", suite_total);

    return 0;
}