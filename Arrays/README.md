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
int maximo = miArray[0];
for (int i = 1; i < 5; i++) {
    if (miArray[i] > maximo) {
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
