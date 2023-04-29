#ifndef LINKED_H
#define LINKED_H


/*En este ejemplo utilizare una lista enlazada simple y realizare las operaciones basicas de inserción y supresión 
 *de elementos dentro de la lista, tambien usaremos funciones para escanear y mostrar por pantalla los elementos de 
 *la misma, espero que lo disfrutes.
 *Si tienes alguna duda contactame en instagram escribiendo a la cuenta: whereismagrey.
 *Gracias. 
 */


typedef struct 
{ 
char nombre; 
int edad;
int Id;
float peso;
}Persona;

struct nodo 
{
 Persona data;
 struct nodo *next;
};
typedef struct nodo *lista;

/*Esta funcion leerá los datos escritos por un usuario en la lista enlazada simple */
void leer (Persona, lista L);
/*Esta funcion muestra los datos que ha almacenado la lista por pantalla*/
void escribir(lista L);

/*En esa seccion utilizare el paradigma divide y venceras para poder insertar elementos en la lista*/

lista crear_nodo (lista L); // crea un nodo en la lista 
lista destruir_nodo (lista L); // Elimina un nodo en la lista 
int verificar (lista L); // verifica si existen elementos en la lista 

/*Para Insertar Elementos en la lista*/
lista insertar_inicio (lista L,Persona P); // Esta funcion devuelve una lista con un elemento insertado al inicio
lista insertar_mitad  (lista L,Persona P); // Esta funcion devuelve una lista con un elemento insertado a la mitad 
lista inserta_final   (lista L,Persona P); // Esta funcion devuelve una lista con un elemento insertado al final 
lista insercion_general (lista,Persona P); // Esta funcion engloba los tres tipos de insercion y devuelve la lista con el elemento ya insertado

/*Para Elimimar Elementos en la lista*/
lista eliminar_inicio (lista L); // Devuelve una lista cuyo elemento ha sido eliminado al inicio.
lista eliminar_mitad (lista L); // Devuelve una lista cuyo elemento ha sido eliminado en la mitad. 
lista eliminar_final (lista L); // Devuelve una lista cuyo elemento ha sido eliminado al final. 
lista supresion_general(lista L);// Engloba los tres tipos de supresion.

#endif // LINKED_H








