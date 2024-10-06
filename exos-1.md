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

**Implémenter cette fonction récursive. Transformer en récursion terminale.**
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

 
