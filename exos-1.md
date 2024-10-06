# 1. Combinaisons
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

**1. Implémentez cette formule. Notez les débordements lorsque n et k sont suffisamment grands**

La formule récursive pour les combinaisons peut être exprimée comme suit :

$$
C(n, k) = C(n - 1, k - 1) + C(n - 1, k)
$$

  
**2. Implémentez avec une fonction récursive**

**3. Implémentez sans récursion tout retardant les débordements**


 
