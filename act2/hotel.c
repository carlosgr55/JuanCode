#include <stdio.h>

float IVA = 0.16;
float impuesto = 0.12;
float costo_sen = 1050.50;
float costo_suite = 1500.75;
float costo_doble = 850.25;


int main() {

    float sen_acum, suite_acum, doble_acum;
    sen_acum = suite_acum = doble_acum = 0;
    int costo_noche, tipo_habitacion, noches, num_habitaciones, num_huespedes, subtotal, total;
    costo_noche = tipo_habitacion = noches = num_habitaciones = num_huespedes = subtotal = total = 0;


    for(int i = 0; i<30; i++){
        printf("Ingresa el tipo de habitacion\n 1)Sencilla\n 2)Doble\n 3)Suite\n");
        scanf("%d", &tipo_habitacion);

        printf("Ingresa el numero de huespedes\n");
        scanf("%d", &num_huespedes);

        printf("Ingresa el numero de noches\n");
        scanf("%d", &noches);

        if(tipo_habitacion == 1){

        }






    }




}