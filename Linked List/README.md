# ¿Que Es una Lista enlazada Simple?

Es una estructura de datos dinamico, es decir estan formadas por nodos que contienen un dato y un puntero que apunta al siguiente elemento de la lista es decir, los nodos almacenan
los datos de manera secuencial y el puntero dentro del nodo actua como puente puesto que apunta al siguiente nodo de la lista.

NB: un nodo esta formado por un dato y un puntero al siguiente nodo.

# Formas de Declarar una Lista enlazada Simple:

- Primera forma de declarar una lista:

```c
typedef struct{
int edad;
float peso;
char nombre[30];
}Persona;

typedef struct node{
persona info;
struct node *Next;   //El elemento siguiente de la lista
}Node;              //variable de la Lista

Node* List;        //creacion de una lista
List=NULL;        //inicio o cabeza de la lista inicializada a NULL
```

- Segunda forma de declarar:

```c
typedef struct persona{
int edad;
float peso;
char nombre[30];
}

struct nodo
{
persona info;
struct nodo * next;
};

typedef struct nodo * list; // creamos un alias para la lista por si queremos usarlo en cabeceras de funciones

//NB: te recomiendo esta forma de declarar listas enlazadas simples
```

- Tercera Forma de declarar:

```c
typedef struct persona{
int edad;
float peso;
char nombre[30];
}

typedef struct nodo Nodo;  //creacion de una estructura nodo con un Allias Nodo

struct nodo{   //es el nombre de la estructura
persona P;
struct nodo *next;
};

typedef Nodo *Lista; // Nodo procede del Allias de la estructura nodo
```

# ¿Cual es la problematica que permite el surgimiento de este tipo de estructura de datos?

- La problemática que permite el surgimiento de listas enlazadas simples es la necesidad de almacenar y acceder a datos de forma dinámica, es decir, cuando no se sabe de antemano la cantidad exacta de datos que se van a manejar y/o su tamaño puede cambiar durante la ejecución del programa, lo que las hace útiles para la implementación de estructuras de datos como pilas, Filas y listas doblemente enlazadas.

- Eficiencia en la inserción y eliminación de elementos: a diferencia de los arreglos estáticos, en los cuales agregar o eliminar elementos puede ser costoso en términos de tiempo y espacio, las listas enlazadas simples permiten la inserción y eliminación de elementos de forma más eficiente.

- Flexibilidad en el uso de memoria: como se mencionó anteriormente, las listas enlazadas simples permiten el uso dinámico de memoria, lo que significa que sólo se utiliza la cantidad de memoria necesaria para almacenar los elementos presentes en la lista en un momento dado.

- Fácil implementación de algunas estructuras de datos: las listas enlazadas simples son utilizadas en la implementación de estructuras de datos como pilas, colas y listas, las cuales son de uso frecuente en programación.

- Facilidad de ordenamiento: en algunas situaciones, las listas enlazadas simples pueden ser más fáciles de ordenar que los arreglos estáticos.

# ¿Que operaciones importantes se usan en las Pilas simplemente enlazadas?

- Agregar un elemento al principio de la lista: esta operación permite agregar un nuevo elemento al inicio de la lista:
  void `Agregar(Lista L, Persona P)`

NB: La forma de agregar elementos en una lista varia segun la posicion en la cual querramos agregar el elemento es decir, de la manera en que agrego un elemento al inicio de la lista, no es de la misma forma en que agrego este en la mitad y al final de la lista.

- Eliminar un elemento del inicio de la lista: esta operación permite eliminar el primer elemento de la lista:
  `void Eliminar(Lista L)`

NB: De igual forma que para agregar, para suprimir un elemento en la lista, debemos saber que la manera de tratar este procedimienfo varia segun la posicion en que se encuentre el elemento.

- Buscar un elemento en la lista: esta operación permite buscar un elemento específico en la lista.
  `void Buscar(Lista L, Persona P)`

- Obtener el tamaño de la lista: esta operación permite obtener la cantidad de elementos presentes en la lista:
  `void Size(lista L)`

- Obtener el elemento en una posición específica: esta operación permite obtener el valor de un elemento en una posición determinada de la lista.
  `void Obtener_Elemento_POsicion(Lista L, int Posicion)´

- Insertar un elemento en una posición específica: esta operación permite insertar un nuevo elemento en una posición específica de la lista.
  `void insertarElementoEnPosicion(lista L,Persona P, int posicion)`

# ¿En que casos debemos usar listas enlazadas?

Se recomienda utilizar listas enlazadas simples:

- Cuando el tamaño de la colección de elementos es desconocido o puede variar en tiempo de ejecución: Las listas enlazadas simples son ideales para almacenar elementos cuyo número o tamaño es desconocido o puede variar en tiempo de ejecución. A diferencia de los arreglos estáticos, las listas enlazadas no tienen un tamaño fijo y se pueden expandir o reducir según sea necesario.

- Cuando se requiere un acceso rápido al inicio de la lista: Las listas enlazadas simples proporcionan un acceso rápido al primer elemento de la lista, ya que solo es necesario acceder al primer nodo de la lista para obtenerlo.

- Cuando se requiere una inserción o eliminación de elementos rápida en cualquier posición: Las listas enlazadas simples permiten insertar o eliminar elementos en cualquier posición de la lista de manera eficiente, ya que solo es necesario cambiar los punteros del nodo anterior y posterior al elemento que se está insertando o eliminando.

- Cuando se necesita optimizar el uso de memoria: Las listas enlazadas simples son una buena opción cuando se desea optimizar el uso de memoria, ya que solo se utiliza la cantidad de memoria necesaria para almacenar los elementos que se encuentran en la lista.

- Cuando se necesitan estructuras de datos anidadas: Las listas enlazadas simples se pueden utilizar para implementar estructuras de datos anidadas, como por ejemplo listas de listas o árboles. Esta flexibilidad se debe a que cada nodo de la lista puede contener una referencia a otra lista o estructura de datos.

# ¿Cuales son los principios de las operaciones mas importantes de las Listas enlazadas simples?

Las operaciones más importantes en las listas enlazadas simples son la inserción, eliminación y búsqueda de elementos. A continuación, se describen los principios fundamentales de estas operaciones:

- Inserción: la inserción de un nuevo elemento en una lista enlazada simple implica la creación de un nuevo nodo con el valor del elemento y su posterior inserción en la lista en una posición específica. Para esto, se deben actualizar los punteros del nodo anterior y del nodo siguiente al nodo insertado. En términos generales, se pueden distinguir dos tipos de inserción: la inserción al inicio de la lista y la inserción en una posición intermedia o al final de la lista.

- Eliminación: la eliminación de un elemento en una lista enlazada simple implica la eliminación del nodo que contiene el valor del elemento. Para esto, se deben actualizar los punteros del nodo anterior y del nodo siguiente al nodo eliminado. En términos generales, se pueden distinguir dos tipos de eliminación: la eliminación del primer elemento de la lista y la eliminación de un elemento en una posición intermedia o al final de la lista.

- Búsqueda: la búsqueda de un elemento en una lista enlazada simple implica recorrer los nodos de la lista en orden, comparando el valor del elemento buscado con el valor de cada nodo. Si se encuentra el elemento, se devuelve la posición del nodo en la lista. Si el elemento no se encuentra en la lista, se devuelve un valor que indique que el elemento no está presente.

## Nota

En general, las operaciones en las listas enlazadas simples se basan en la manipulación de punteros entre nodos para mantener la estructura de la lista coherente. Por lo tanto, es importante tener en cuenta los principios fundamentales de los punteros y el manejo de memoria dinámica para trabajar de manera eficiente con listas enlazadas simples.
