#include "linked.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leer (Persona *P)
{
 printf ("Nombre: ");
 scanf("%[^\n]",P->nombre); // Cadena compuesta 
 printf("->Edad: ");
 scanf("%d",&P->edad);
 printf("->ID: ");
 scanf("%d",&P->Id);
 printf("->Peso: ");
 scanf("%f",&P->peso);

}


void escribir(lista L)
{
 if (L == NULL)
 {printf("Lista Vacia\n");}
 else 
 {
  printf("->");
  printf("[Nombre: %s | Edad: %d | Id: %d | Peso: %f ]->",L->data.nombre,L->data.edad,L->data.Id,L->data.peso);
  escribir (L->next);
 }

}

lista crear_nodo (lista L)
{
 Persona D; // Nuevo dato
 struct nodo *nuevo;
 /*Reservamos memoria para crear un nuevo nodo*/
 nuevo = (lista)malloc(sizeof (struct nodo)); 
 /*En su campo dato ponemos el nuevo dato*/
 nuevo->data = D;  
 return nuevo;

}


