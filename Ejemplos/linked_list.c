#include "linked.h"

lista list_empty(void)
{
  return NULL;
}

int menu()
{
  int opcion;
  printf("|----------Menu----------|\n");
  printf("|0. Salir                |\n");
  printf("|1. Ingresar elementos   |\n");
  printf("|2. Mostrar elementos    |\n");
  printf("|3. Agregar elementos    |\n");
  printf("|4. Eliminar elementos   |\n");
  printf("|------------------------|\n");
  printf("->Ingrese una opcion: ");
  scanf("%d", &opcion);
  return opcion;
}

void leer_nodo(Persona *P)
{
  printf("\nNombre: ");
  fflush(stdin);
  scanf("%[^\n]", P->nombre); // Cadena compuesta
  printf("\nEdad: ");
  scanf("%d", &P->edad);
  printf("\nID: ");
  scanf("%d", &P->Id);
  printf("\nPeso: ");
  scanf("%f", &P->peso);
}

void mostrar_nodo(lista L)
{
  if (L == NULL)
  {
    printf("Lista Vacia\n");
  }
  else
  {
    printf("->");
    printf("[Nombre: %s | Edad: %d | Id: %d | Peso: %f ]->", L->data.nombre, L->data.edad, L->data.Id, L->data.peso);
    mostrar_nodo(L->next);
  }
}

lista crear_nodo(Persona P)
{
  Persona D; // Nuevo dato
  struct nodo *nuevo;
  /*Reservamos memoria para crear un nuevo nodo*/
  nuevo = (lista)malloc(sizeof(struct nodo));
  /*En su campo dato ponemos el nuevo dato*/
  nuevo->data = D;
  return nuevo;
}

lista destruir_nodo(lista L)
{
  L->next = NULL;
  free(L);
  return L;
}

int verificar(lista L)
{
  /*Si la lista esta Vacia devolvemos el valor 1*/
  if (L == NULL)
  {
    return 1;
  }
  /*Si no, se devuelve 0*/
  else
  {
    return 0;
  }
}

lista insertar_inicio(lista L, Persona P)
{
}

lista insertar_mitad(lista L)
{
}

lista insertar_final(lista L)
{
}

lista insercion_general(lista L)
{
  int opt;
  Persona P;
  printf("En que posicion desea Insertar el elemento en la lista?\n");
  printf("1. Al inicio\n2. En la mitad\n3. Al final\n");
  printf("Ingrese una opcion valida del 1 al 3: ");
  scanf("%d", &opt);
  switch (opt)
  {
  case 1:
    L = insertar_inicio(L, P);
    return L;
    break;
  case 2:
    L = insertar_mitad(L);
    return L;
    break;
  case 3:
    L = insertar_final(L);
    return L;
    break;
  default:
    printf("Error: Escoja una opcion valida: ");
    break;
  }
}

void suprimir(lista L, int element)
{
  struct nodo *actual;
  struct nodo *anterior;
  anterior = NULL;
  while ((actual != NULL) && (actual->data.Id != element)) /*Actualizamos los valores de Anterior y actual*/
  {
    anterior = actual;
    actual = actual->next;
  }
  if (actual == NULL) /*Significa que no se encontro un nodo con ese dato o que la lista esta Vacia*/
  {
    if (L == NULL) // Significa que la lista esta vacia
    {
      printf("La Lista esta Vacia");
    }
    else // significa que no se hallo en la lista el elemento que se desea eliminar
    {
      printf("No se Encontro en Elemento en la lista");
    }
  }
  else
  {
    if (L == actual) /*Significa que se eliminara el primer elemento en la lista*/
    {
      L = actual->next;
    }
    else
    {
      anterior->next = actual->next;
      free(actual); // Se libera el nodo.
    }
  }
}

/*
 *En otra version de este codigo usare las funciones de destruir nodo, tambien usare el paradigma de divide y venceras para eliminar
 *elementos en la lista enlazada.
 */