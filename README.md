# ArrayList - Asignación 02

Añada las implementaciones de las siguientes funciones:

1. Sobrecargar el operator+ para que L1 + L2, devuelva una nueva lista que concatena el contenido de L1 y L2.

    Por ejemplo, si `L1 = (9, 5, 4)` y `L2 = (2, 3)`. `L3 = L1 + L2` asigna a `L3` la lista `(9, 5, 4, 2, 3)`.

1. `void removeOdds()` - remueve de la lista los elementos impares. 

    Por ejemplo, si `L = (9, 4, 2, 15)`, luego de L.removeOdds(), `L` contiene `(4, 2)`

1. `int mode() const`: returns the mode of the list, i.e. the most repeated element. You may assume that the list contains only positive numbers in the range of 1 to 1000. If there is no mode, the member function will return -1. Your algorithm should be O(n) in the worst case.

    Examples:

    * If the list L contains (1, 2, 1, 1), L.mode() will return 1.
    * If the list L contains (1, 2, 2, 1), L.mode() will return -1 because the list has no mode, i.e. there are two or more numbers that repeat the same number of times.
    * If the list L contains (33,22,44), L.mode() will return -1 because the list has no mode, i.e. there are two or more numbers that repeat the same number of times.

Recuerde hacer casos de prueba en `main.cpp` para corroborar que las funciones están correctas. 

