# Arrays

## ¿Que son?

Un array es una estructura de datos en la que se pueden almacenar varios valores del mismo tipo. Es como una colección o una lista ordenada de elementos, donde cada elemento tiene una posición numérica única que se llama índice.

- Por ejemplo, si quisiéramos almacenar una lista de los números del 1 al 5, podríamos crear un array llamado "numeros" con 5 elementos. Cada elemento contendría un número, y se podría acceder a cada número utilizando su índice correspondiente:

`int numeros[5] = {1, 2, 3, 4, 5}`

En este ejemplo, "numeros" es el nombre del array y tiene 5 elementos, cada uno con un valor diferente. El primer elemento (índice 0) contiene el valor 1, el segundo elemento (índice 1) contiene el valor 2, y así sucesivamente.

Los arrays son muy útiles en la programación porque permiten almacenar y acceder a varios valores de forma eficiente. Se pueden utilizar para realizar cálculos, almacenar datos de entrada o salida, crear estructuras más complejas como matrices, entre otros usos.

## Nota

Es importante tener en cuenta que los arrays tienen un tamaño fijo que se define al momento de su creación y no se puede cambiar después. Si necesitas almacenar más valores de los que caben en un array, es posible que necesites utilizar estructuras de datos más avanzadas, como listas enlazadas o árboles.

# Operaciones importantes para arrays en C

En este README se muestran algunas operaciones importantes para trabajar con arrays en C, junto con ejemplos de código.

## Inicializar un array

Para inicializar un array en C, se puede hacer de varias formas. Una forma es inicializar cada elemento del array de forma individual:

```c
int miArray[5];
miArray[0] = 1;
miArray[1] = 2;
miArray[2] = 3;
miArray[3] = 4;
miArray[4] = 5;
```

## Acceder a los elementos de un array

para acceder a un elemento específico de un array, se utiliza el índice correspondiente al elemento que se desea acceder. El índice se coloca dentro de corchetes [] después del nombre del array. Por ejemplo, si tienes un array llamado "numeros" y quieres acceder al segundo elemento, utilizarías la siguiente sintaxis:

```c
 int numeros[5] = {1, 2, 3, 4, 5};
 int segundoNumero = numeros[1];
```

## Modificar los elementos de un array

una vez que has accedido a un elemento de un array, puedes modificar su valor utilizando el operador de asignación (=). Por ejemplo, si quieres cambiar el valor del tercer elemento del array "numeros" a 10, utilizarías la siguiente sintaxis:

```c
numeros[2] = 10;
```

## Iterar sobre los elementos de un array

una operación común es recorrer todos los elementos de un array y realizar alguna acción con cada uno. Para hacer esto, se utiliza un bucle for que recorre todos los índices del array. Por ejemplo, si quieres imprimir todos los elementos del array "numeros", utilizarías la siguiente sintaxis:

```c
for (int i = 0; i < 5; i++) {
  printf("%d ", numeros[i]);
}
```

## Encontrar el tamaño de un array

para saber cuántos elementos hay en un array, se utiliza la función sizeof. Esta función devuelve el tamaño total del array en bytes, por lo que para obtener el número de elementos se divide el tamaño total por el tamaño de cada elemento. Por ejemplo, si tienes un array de enteros con 5 elementos, utilizarías la siguiente sintaxis para obtener el tamaño del array:

```c
 int numeros[5] = {1, 2, 3, 4, 5};
 int tamano = sizeof(numeros) / sizeof(numeros[0]);
```

## Buscar el máximo y mínimo en un array

Para buscar el máximo o el mínimo en un array en C, se puede recorrer el array y comparar cada elemento con el máximo o mínimo actual. Por ejemplo, para buscar el máximo:

```c
int miArray[5] = {1, 2, 3, 4, 5};
int maximo = miArray[0]; // int elem;
for (int i = 1; i < 5; i++) {
    if (miArray[i] > maximo) {  // (miArray[i] == elem) esta condicion busca un elemento indefinido.
        maximo = miArray[i];
    }
}
printf("El máximo es %d\n", maximo);
```

## Copiar un array

Para copiar un array en C, se puede utilizar la función memcpy de la librería`string.h`

```c
int miArray[5] = {1, 2, 3, 4, 5};
int otroArray[5];
memcpy(otroArray, miArray, 5 * sizeof(int));
```
## Eliminar elementos en un Array
Para eliminar los elementos realizaremos los siguientes pasos:
  1. Identificr el índice del elemento que se desea eliminar en el arreglo.
  2. Desplazar los elementos restantes a la izquierda para llenar el espacio dejado por el elemento eliminado.
  3. Ajustar la longitud del arreglo para reflejar la eliminación del elemento.
  - He aqui un ejemplo que ilustra los pasos anteriormente mencionados: 
```c
#include <stdio.h>

void eliminarElemento(int arreglo[], int *longitud, int elemento) {
    int i, j;
    int encontrado = 0;

    // Buscar el índice del elemento
    for (i = 0; i < *longitud; i++) {
        if (arreglo[i] == elemento) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 1) {
        // Desplazar los elementos restantes a la izquierda
        for (j = i; j < (*longitud - 1); j++) {
            arreglo[j] = arreglo[j + 1];
        }

        // Ajustar la longitud del arreglo
        (*longitud)--;

        printf("Elemento eliminado.\n");
    } else {
        printf("Elemento no encontrado.\n");
    }
}
```


## Ordenar elementos en un Array
Cuando queremos ordenar los elementos de un arreglo o array debemos fijarnos en el tamao del mismo si queremos tener una buena eficiencia, como consecuencia a esto debemos optar el uso de ciertos algoritmos de ordenamiento.
- Para ordenar pequeñas cantidades de datos usamos los algoritmos Bubble sort o Selection Sort
- Para ordenar grandes cantidades de datos usamos los algoritmos Quicksort,Merge Sort o Heapsort
### Nota:
Debes elegir el uso de un algoritmo dependiendo del problema del tamaño de los datos que deseas ordenar del arreglo, he aqui un ejemplo donde
implementare los algoritmos selection sort y Merge Sort:
- Método de selección (Selection Sort):
  Este algoritmo encuentra repetidamente el elemento mínimo del arreglo y lo intercambia con el elemento en la posición actual. Se inicia desde el inicio del arreglo y se mueve hacia la derecha en cada iteración. Al final de cada iteración, se coloca el elemento mínimo en su posición correcta.
  ```c
  void selectionSort(int arreglo[], int longitud) {
    int i, j, indiceMin, temp;

    // Recorrer el arreglo
    for (i = 0; i < longitud - 1; i++) {
        // Encontrar el índice del elemento mínimo en el subarreglo no ordenado
        indiceMin = i;
        for (j = i + 1; j < longitud; j++) {
            if (arreglo[j] < arreglo[indiceMin]) {
                indiceMin = j;
            }
        }

        // Intercambiar el elemento mínimo con el elemento actual
        temp = arreglo[i];
        arreglo[i] = arreglo[indiceMin];
        arreglo[indiceMin] = temp;
    }
  }
  ```
- Merge Sort:
   Es un algoritmo basado en la técnica de dividir y conquistar. Divide el arreglo en mitades más pequeñas, las ordena por separado y luego combina las mitades ordenadas para obtener el arreglo completo ordenado. A diferencia de Quicksort, Merge Sort tiene un rendimiento más consistente y garantiza una complejidad de tiempo de O(n log n) en todos los casos.
   ```c
   void merge(int arreglo[], int inicio, int medio, int fin) {
    int i, j, k;
    int n1 = medio - inicio + 1;
    int n2 = fin - medio;

    // Crear arreglos temporales
    int izquierda[n1], derecha[n2];

    // Copiar los datos a los arreglos temporales
    for (i = 0; i < n1; i++) {
        izquierda[i] = arreglo[inicio + i];
    }
    for (j = 0; j < n2; j++) {
        derecha[j] = arreglo[medio + 1 + j];
    }

    // Combinar los arreglos temporales de vuelta al arreglo original
    i = 0; // Índice inicial del subarreglo izquierdo
    j = 0; // Índice inicial del subarreglo derecho
    k = inicio; // Índice inicial del subarreglo fusionado

    while (i < n1 && j < n2) {
        if (izquierda[i] <= derecha[j]) {
            arreglo[k] = izquierda[i];
            i++;
        } else {
            arreglo[k] = derecha[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de izquierda[] si los hay
    while (i < n1) {
        arreglo[k] = izquierda[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de derecha[] si los hay
    while (j < n2) {
        arreglo[k] = derecha[j];
        j++;
        k++;
    }
  } 

  void mergeSort(int arreglo[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;

        // Ordenar la primera mitad y la segunda mitad
        mergeSort(arreglo, inicio, medio);
        mergeSort(arreglo, medio + 1, fin);

        // Combinar las dos mitades ordenadas
        merge(arreglo, inicio, medio, fin);
    } 
  }     // Llamada al main mergeSort(arreglo, 0, longitud - 1);
   ```
# Otros tipos de Arrays
## Matrices 
Una matriz es una estructura de datos bidimensional que organiza elementos en filas y columnas. Puede verse como una tabla rectangular compuesta por celdas, donde cada celda contiene un valor o un elemento. Las matrices son muy utilizadas en programación y son fundamentales para representar datos tabulares, como datos numéricos, imágenes, gráficos, entre otros.

La estructura básica de una matriz se define por su número de filas y columnas. Por ejemplo, una matriz de tamaño 3x3 tiene tres filas y tres columnas. La posición de cada elemento dentro de la matriz se especifica utilizando dos índices: el índice de la fila y el índice de la columna. La numeración de los índices generalmente comienza desde cero. Aqui le muestro un ejemplo de como se implementarian en el lenguaje C

```c
#include <stdio.h>

int main() {
    // Crear una matriz de 3x3 e inicializarla
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                       {7, 8, 9}};
    int i, j; // creamos las variables de indexacion (indices) de la matriz "i" para las filas y "j" para las columnas
    
    // Acceder a un elemento específico
    int elemento = matriz[1][2];  // El elemento en la fila 1, columna 2 (valor: 6)
    
    // Modificar un elemento
    matriz[0][1] = 10;  // Cambiar el elemento en la fila 0, columna 1 a 10
    
    // Recorrer una matriz e imprimir sus elementos
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

```
## Operaciones importantes con matrices

 ### Suma: 
 La suma de dos matrices se realiza sumando elemento por elemento en posiciones correspondientes. Ambas matrices deben tener las mismas dimensiones. Por ejemplo: 
  
   ```c
   int main (){
   int matriz1[2][2] = {{1, 2},
                      {3, 4}};     // Inicializamos una matriz 2x2  (Matriz A)

  int matriz2[2][2] = {{5, 6},   
                      {7, 8}};     // Inicializamos otra matriz 2x2  (Matriz B)
  int resultado[2][2];   // Matriz resultante de A+B
  int i,j;  // Declaracion de variables de indexacion


  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
        resultado[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
       printf("%d\t%d\n",resultado[i][j]);  // Mostramos los valores por terminal
    }
  }

  return 0; 

  }

 ```
 ### Multiplicacion:
 La multiplicación de dos matrices se realiza multiplicando filas de la primera matriz por columnas de la segunda matriz y sumando los productos resultantes. Las dimensiones de las matrices deben ser compatibles para la multiplicación de matrices. Por ejemplo:

  ```c   
  int main () {
  int matriz1[2][3] = {{1, 2, 3},
                     {4, 5, 6}};   // Matriz A 
  int matriz2[3][2] = {{7, 8},
                     {9, 10},
                   {11, 12}};  // Matriz B
  int resultado[2][2];  /* Matriz Resultante, es de 2x2 porque las dos matrices al tener las mismas columnas, se cumple que la matriz
                        * resultante sea el valor de la fila de la matriz A (2) mas el valor de la columna de la matriz B (2) mas la columna 
                        */
  int i,j,k;  // Variables de indexacion          
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
        resultado[i][j] = 0;
        for (k = 0; k < 3; k++) {
            resultado[i][j] += matriz1[i][k] * matriz2[k][j];  // resultado [i][j] = resultado[i][j] + matriz1[i][k] * matriz2[k][j]
        }
    }
    
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
       printf("%d\t%d\n",resultado[i][j]);  // Mostramos los valores por terminal
    }
  }

  return 0;

  }
  ```
 ### Transposicion de Terminos:  
 La transposición de una matriz implica intercambiar sus filas por columnas. Esto se puede lograr creando una nueva matriz o realizando la transposición in situ en la matriz existente. Por ejemplo:

 ```c
 int matriz[3][2] = {{1, 2},
                    {3, 4},
                    {5, 6}};
 int resultado[2][3];
 int i,j;
 for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
        resultado[j][i] = matriz[i][j];
    }
}
 ```
## Array de Caracteres 
Un array de caracteres, también conocido como una cadena de caracteres o string, es una estructura de datos que representa una secuencia de caracteres en lenguajes de programación como C.

En C, un array de caracteres se define utilizando el tipo de datos `char` y se representa como una secuencia contigua de elementos char en la memoria. La secuencia de caracteres se termina con el carácter `nulo \0`, que indica el final de la cadena.

Aquí tienes un ejemplo de cómo se declara un array de caracteres en C:
```c
char cadena[] = "Hola, mundo!";
```
En este caso, el array de caracteres cadena tiene una longitud automática y se inicializa con la cadena "Hola, mundo!". El compilador determina automáticamente el tamaño del array basándose en la longitud de la cadena de inicialización.

También puedes declarar un array de caracteres sin inicializarlo:
```c
char nombre[50];
```
En este ejemplo, se declara un array de caracteres llamado **nombre** con una longitud de 50 elementos. Puedes asignar una cadena de caracteres posteriormente utilizando funciones de manipulación de cadenas como **strcpy()** o leyendo la entrada del usuario.

Un array de caracteres se puede acceder elemento por elemento utilizando un índice entero, donde el primer carácter se encuentra en el índice 0. Por ejemplo:
```c
char letra = cadena[0];  // Obtiene el primer carácter de la cadena
```
También se puede utilizar la notación de puntero para manipular y recorrer un array de caracteres:También se puede utilizar la notación de puntero para manipular y recorrer un array de caracteres:
```c
char *ptr = cadena;  // Apunta al primer carácter de la cadena
```
Los arrays de caracteres se utilizan comúnmente para representar texto en C, y existen numerosas funciones de biblioteca para trabajar con ellos, como **strlen()** para obtener la longitud de una cadena, **strcmp()** para comparar cadenas, **strcat()** para concatenar cadenas, entre otras.

En C los arrays de caracteres no son objetos de tipo string, sino simplemente secuencias de caracteres en memoria. El programador debe asegurarse de gestionar correctamente la memoria y tener en cuenta las limitaciones de longitud y el carácter nulo `\0` al trabajar con arrays de caracteres.

## Funciones mas comunes 
   ### strlen():
   Esta función se utiliza para obtener la longitud de una cadena de caracteres. Toma como argumento un array de caracteres y devuelve un valor entero que representa la cantidad de caracteres en la cadena, sin incluir el carácter nulo **\0** Ejemplo:
  
  ```c
  char cadena[] = "Hola";
  int longitud = str  len(cadena);  // Devuelve 4 
  ```

   ### strcpy():
   La función **strcpy()** se utiliza para copiar una cadena de caracteres en otra cadena. Recibe dos argumentos: el destino y el origen de la copia. Ambas cadenas deben ser arrays de caracteres válidos. Ejemplo:

```c
char origen[] = "Hola";
char destino[10];
strcpy(destino, origen);  // Copia "Hola" a destino
```

   ### strcmp():
   Esta función se utiliza para comparar dos cadenas de caracteres. Devuelve un valor entero que indica la relación entre las cadenas. Si el valor devuelto es negativo, la primera cadena es menor que la segunda; si es positivo, la primera cadena es mayor que la segunda; si es cero, las cadenas son iguales. Ejemplo:
   
   ```c
  char cadena1[] = "Hola";
  char cadena2[] = "Hola";
  int resultado = strcmp(cadena1, cadena2);  // Devuelve 0
  ```
  ### strcat():
   La función **strcat()** se utiliza para concatenar dos cadenas de caracteres. Toma como argumentos el destino y el origen de la concatenación, y une el contenido del origen al final del destino. Ambas cadenas deben ser arrays de caracteres válidos y el destino debe tener suficiente espacio para contener la cadena resultante. Ejemplo:

```c
char destino[20] = "Hola";
char origen[] = ", mundo!";
strcat(destino, origen);  // Concatena ", mundo!" a destino
```

Nota [^1]
[^1]: Todas estas funciones se encuentran en la libreria <string.h>, por lo que se debe tener encuenta antes de su uso 
[^2]: Ahora Por cada carpeta de este repositorio trabajaremos en un proyecto simple segun la estructura de datos que corresponda