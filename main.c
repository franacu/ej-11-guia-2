#include <stdio.h>
#include "helper.h"


int main()
{
    char localizacion[50];
    int cantidad;
    int precioMax;

    Nodo *R1 = newNodo("caballito", 4, 160000);
    Nodo *R2 = newNodo("palermo", 2, 200000);
    Nodo *R3 = newNodo("recoleta", 3, 120000);
    Nodo *R4 = newNodo("devoto", 2, 300000);
    Nodo *R5 = newNodo("villa crespo", 4, 100000);
    Lista *lista = newLista();
    agregarLista(R1, lista);
    agregarLista(R2, lista);
    agregarLista(R3, lista);
    agregarLista(R4, lista);
    agregarLista(R5, lista);

    printf("Ingrese localizacion deseada:\n");
    scanf("%s", localizacion);
    printf("Ingrese cantidad de cuartos deseada:\n");
    scanf("%d",&cantidad);
    printf("Ingrese precio maximo deseado a pagar:\n");
    scanf("%d",&precioMax);
    imprimirLista(lista);
    Condiciones(cantidad, localizacion, precioMax, lista);

    return 0;
}
