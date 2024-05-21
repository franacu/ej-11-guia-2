//
// Created by Fran on 20/05/2024.
//

#ifndef EJ10_GUIA2_HELPER_H
#define EJ10_GUIA2_HELPER_H
typedef struct registro
{
    char barrio[50];
    int cantAmbientes;
    float precio;
    struct registro *sig;
}Nodo;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(char *barrio,int cantAmbientess,float precio);
Lista * newLista();
void agregarLista(Nodo *nodoAIngresar,Lista *lista);
void imprimirLista(Lista *lista);
void Condiciones(int cantExigida,char *barrioEleg,int precioMax,Lista *lista);

#endif //EJ10_GUIA2_HELPER_H
