#ifndef LINKED_H
#define LINKED_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*En este ejemplo utilizare una lista enlazada simple y realizare las operaciones basicas de inserción y supresión
 *de elementos dentro de la lista, tambien usaremos funciones para escanear y mostrar por pantalla los elementos de
 *la misma, espero que lo disfrutes.
 *Si tienes alguna duda contactame en instagram escribiendo a la cuenta: whereismagrey.
 *Gracias.
 */

typedef struct
{
    char nombre[30];
    int edad;
    int Id;
    float peso;
} Persona;

struct nodo
{
    Persona data;
    struct nodo *next;
};
typedef struct nodo *lista;

/*Inicia una lista vacia*/
lista list_empty(void);
/*Esta funcion leerá los datos escritos por un usuario en la lista enlazada simple */
void leer_persona(Persona *P);
/*Esta funcion muestra los datos que ha almacenado la lista por pantalla*/
void mostrar_nodo(lista L);

/*En esa seccion utilizare el paradigma divide y venceras para poder insertar elementos en la lista*/

lista *crear_nodo(Persona P); // crea un nodo al final de la lista

int verificar(lista L); // verifica si la lista esta vacia o no

/*Para Insertar Elementos en la lista*/
lista *insertar_inicio(lista *L, Persona P); // Esta funcion devuelve una lista con un elemento insertado al inicio
lista *insertar_mitad(lista *L, Persona P);  // Esta funcion devuelve una lista con un elemento insertado a la mitad
lista *insertar_final(lista *L, Persona P);  // Esta funcion devuelve una lista con un elemento insertado al final
lista *insercion_general(lista *L);          // Esta funcion engloba los tres tipos de insercion y devuelve la lista con el elemento ya insertado

/*Para Elimimar Elementos en la lista*/
void suprimir(lista L, int element); // Elimina un elemento en la lista segun un entero que precise el usuario

/*Menu*/
int menu(); // Muestra las distintas opciones que podemos unsar en el programa.

#endif // LINKED_H
