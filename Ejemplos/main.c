#include "linked.h"



void main()
{
int option, eliminar;
lista L = NULL;
Persona P;
enum {
    Salir = 0,
    Leer_Estructura = 1,
    Mostrar_Lista = 2,
    Insertar_Elementos = 3,
    Eliminar_Elementos = 4,
    };
do 
{
option = menu();
switch (option)
{ 
 case Salir:
 system("pause"); 
 break;
 case Leer_Estructura:
 leer (&P);
 break;
 case Mostrar_Lista:
 escribir (L);
 break;
 case Insertar_Elementos:
 insercion_general(L);
 break;
 case Eliminar_Elementos:
 printf("Elemento a eliminar: ");
 scanf("%d", &eliminar);
 suprimir (L,eliminar);
 break;
 default:
 printf("Elija Una Opcion Correcta entre  0-4\n");
 break;
 
}
system ("cls"); }while(option != 0);

}