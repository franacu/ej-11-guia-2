//
// Created by Fran on 20/05/2024.
//
#include <stdio.h>
#include "helper.h"
#include "stdlib.h"
#include "string.h"

Nodo *newNodo(char *barrio, int cantAmbientes, float precio) {
    Nodo *aux = malloc(sizeof(Nodo));
    if (aux == NULL) {
        return NULL;
    }
    strcpy(aux->barrio, barrio);
    aux->cantAmbientes = cantAmbientes;
    aux->precio = precio;
    aux->sig = NULL;
    return aux;
}

Lista *newLista() {
    Lista *aux = malloc(sizeof(Lista));
    if (aux == NULL) {
        return NULL;
    }
    aux->cab = NULL;
    return aux;
}

void agregarLista(Nodo *nodoAIngresar, Lista *lista) {
    if (lista->cab == NULL) {
        lista->cab = nodoAIngresar;
    } else {
        Nodo *aux = lista->cab;
        while (aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = nodoAIngresar;
    }
}

void imprimirLista(Lista *lista)
{
    Nodo *aux=lista->cab;

    while(aux!=NULL)
    {
        printf("Departamento en:\n");
        printf("Barrio: %s\nCuartos: %d\nPrecio: %.2f\n", aux->barrio, aux->cantAmbientes, aux->precio);
        aux=aux->sig;
    }
}

void Condiciones(int cantExigida, char *barrioEleg,int precioMax, Lista *lista) {
    Nodo *aux = lista->cab;
    int encontrados = 0;
    printf("Departamentos especificos:\n");
    for(;aux!=NULL;aux=aux->sig)
    {
        if (strcmp(aux->barrio,barrioEleg)==0 && aux->cantAmbientes >= cantExigida && aux->precio <= precioMax)
        {
            printf("Departamento en:\n");
            printf("Barrio: %s\n Cuartos: %d\n Precio: %.2f\n", aux->barrio, aux->cantAmbientes, aux->precio);
            encontrados++;
        }
    }
    if (encontrados == 0) {
        printf("No se encontraron departamentos que cumplan con las condiciones especificadas.\n");
    }
}
