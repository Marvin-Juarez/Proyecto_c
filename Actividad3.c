#include <stdio.h>

// Funciones de conversión
float convertirDeQuetzales(float cantidad, int opcion);
float convertirDeDolares(float cantidad, int opcion);
float convertirDeEuros(float cantidad, int opcion);

int main() {
    int opcionMonedaOrigen, opcionMonedaDestino;
    float cantidad, resultado;

    // Menú de opciones
    printf("Aplicación de Conversor de Monedas\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares (USD)\n");
    printf("3. Euros (EUR)\n");

    // Solicitar entrada de la moneda de origen
    printf("\nSelecciona la moneda de origen:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Opción: ");
    scanf("%d", &opcionMonedaOrigen);

    // Solicitar la cantidad a convertir
    printf("Ingresa la cantidad a convertir: ");
    scanf("%f", &cantidad);

    // Solicitar entrada de la moneda de destino
    printf("\nSelecciona la moneda de destino:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Opción: ");
    scanf("%d", &opcionMonedaDestino);

    // Convertir y mostrar el resultado
    if (opcionMonedaOrigen == 1) {
        resultado = convertirDeQuetzales(cantidad, opcionMonedaDestino);
    } else if (opcionMonedaOrigen == 2) {
        resultado = convertirDeDolares(cantidad, opcionMonedaDestino);
    } else if (opcionMonedaOrigen == 3) {
        resultado = convertirDeEuros(cantidad, opcionMonedaDestino);
    } else {
        printf("Opción no válida.\n");
        return 1;
    }

    // Mostrar resultado de la conversión
    if (opcionMonedaDestino == 1) {
        printf("%.2f convertido a Quetzales (GTQ) es: %.2f\n", cantidad, resultado);
    } else if (opcionMonedaDestino == 2) {
        printf("%.2f convertido a Dólares (USD) es: %.2f\n", cantidad, resultado);
    } else if (opcionMonedaDestino == 3) {
        printf("%.2f convertido a Euros (EUR) es: %.2f\n", cantidad, resultado);
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}

// Funciones de conversión entre monedas
float convertirDeQuetzales(float cantidad, int opcion) {
    float resultado;
    if (opcion == 2) {
        resultado = cantidad / 7.75;  // 1 USD = 7.75 GTQ (aproximado)
    } else if (opcion == 3) {
        resultado = cantidad / 8.70;  // 1 EUR = 8.70 GTQ (aproximado)
    } else {
        resultado = cantidad;  // Si es Quetzales a Quetzales, no se hace conversión
    }
    return resultado;
}

float convertirDeDolares(float cantidad, int opcion) {
    float resultado;
    if (opcion == 1) {
        resultado = cantidad * 7.75;  // 1 USD = 7.75 GTQ (aproximado)
    } else if (opcion == 3) {
        resultado = cantidad * 0.93;  // 1 USD = 0.93 EUR (aproximado)
    } else {
        resultado = cantidad;  // Si es Dólares a Dólares, no se hace conversión
    }
    return resultado;
}

float convertirDeEuros(float cantidad, int opcion) {
    float resultado;
    if (opcion == 1) {
        resultado = cantidad * 8.70;  // 1 EUR = 8.70 GTQ (aproximado)
    } else if (opcion == 2) {
        resultado = cantidad / 0.93;  // 1 EUR = 1.075 USD (aproximado)
    } else {
        resultado = cantidad;  // Si es Euros a Euros, no se hace conversión
    }
    return resultado;
}