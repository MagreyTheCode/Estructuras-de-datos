#include "linked.h"

void main()
{
    /*Aqui declaro las variables que usare despues*/

    char continuar[2];
    int option, eliminar;
    lista L;
    Persona P;
    L = list_empty(); // Inicializacion de una lista Vacia

    /*Opciones del Menu del programa*/
    enum
    {
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
            leer_persona(&P);
            break;
        case Mostrar_Lista:
            mostrar_nodo(L);
            break;
        case Insertar_Elementos:
            do
            {
                insercion_general(L);
                printf("¿Desea continuar insertando elementos en la lista? (si/no): ");
                scanf("%s", continuar);
            } while (strcmp(continuar, "no") != 0);
            break;
        case Eliminar_Elementos:
            printf("Elemento a eliminar: ");
            printf("%d", &eliminar);
            break;
        default:
            printf("Elija Una Opcion Correcta entre  0-4\n");
            break;
        }
        system("cls");
    } while (option != 0);
}