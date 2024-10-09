# Somme d'un tableau 

```c
#include <stdio.h>

int recursive_sum(int arr[], int size) {
    if (size == 0)    return 0;   
    else return arr[size - 1] + recursive_sum(arr, size - 1);
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    int total_sum = recursive_sum(numbers, 5);
    printf("%d \n", total_sum); 

    return 0;
}
```
Récursion terminale:
```c
#include <stdio.h>

int tail_recursive_sum(int arr[], int size, int accumulator) {
     if (size == 0)         return accumulator;
     else return tail_recursive_sum(arr, size - 1, accumulator + arr[size - 1]);
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    int total_sum = tail_recursive_sum(numbers, size, 0);

    printf("%d \n", total_sum); 

    return 0;
}
```
Compilation:
```
gcc nomfichier.c
```
# La suite de Fibonacci
La suite de Fibonacci est une séquence de nombres définie par la relation suivante :

$$
F(n) = 
\begin{cases} 
0 & \text{si } n = 0 \\
1 & \text{si } n = 1 \\
F(n-1) + F(n-2) & \text{sinon}
\end{cases}
$$

**Implémenter cette fonction récursive.**
# Combinaisons
La formule pour les combinaisons sans répétition est donnée par :

$$
C(n, k) = \frac{n!}{k!(n - k)!}
$$



avec les cas de base :

$$
C(n, 0) = 1 \quad \text{pour tout } n \geq 0
$$

$$
C(n, n) = 1 \quad \text{pour tout } n \geq 0
$$

**Implémentez cette formule. Notez les débordements lorsque n et k sont suffisamment grands**

La formule récursive pour les combinaisons peut être exprimée comme suit :

$$
C(n, k) = C(n - 1, k - 1) + C(n - 1, k)
$$

  
**Implémenter cette fonction récursive.**  
**Trouver un algorithme non récursif qui retarde les débordements.**

 
