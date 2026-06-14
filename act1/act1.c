#include <stdio.h>

// Constates
float iva = 0.16; // Constate global de IVA
char *producto = "Huevo"; // Constate global de producto

int main(){

    //Mensaje de bienvenidas y constantes
    printf("BIENVENIDO A LA HUEVERIA\n");
    printf("Constantes: \n Producto %s \n IVA %.2f\n", producto, iva);

    //Variables
    int cantidad;
    float costoProducto;

    //Entrada de datos
    printf("Ingrese la cantidad de huevos: ");
    scanf("%d", &cantidad);
    printf("\nIngrese el costo por unidad: ");
    scanf("%f", &costoProducto);

    //Calculos
    float subtotal = cantidad * costoProducto; //Calcular subtotal
    subtotal = subtotal + (subtotal * iva); // Agregar el IVA al subtotal
    float descuento = subtotal * 0.05;
    float total = subtotal - descuento; // Calcular el total con descuento

    //Salida de datos
    printf("VALORES CALCULADOS\n");
    printf("Subtotal: %.2f\n", subtotal);
    printf("Descuento: %.2f\n", descuento);
    printf("Total a pagar: %.2f\n", total);
    //bye bye
    printf("GRACIAS POR SU COMPRA\n");

    return 0;
}



