# Ejercicios Programación Evaluables

Ejercicios de Introducción a la Programación en C++ (texto guía del curso).
13 ejercicios, cada uno en su propio fichero `.cpp` con comentarios explicativos.

## Cómo compilar

```bash
g++ -std=c++17 nombre_del_fichero.cpp -o programa
./programa
```

El ejercicio 3.25 usa `cpp_int` de **Boost Multiprecision**, así que necesita
tener Boost instalado (solo cabeceras; en Ubuntu: `sudo apt install libboost-dev`).

## Índice de ejercicios

| Ejercicio | Fichero | Resultado |
|---|---|---|
| 3.11 ¿Qué muestra? | `ex03_11.cpp` | 10 líneas alternando `****` (impares) y `++++++++` (pares) |
| 3.12 ¿Qué muestra? | `ex03_12.cpp` | 10 filas de 10 caracteres, alternando `>>>>>>>>>>` y `<<<<<<<<<<` (empieza por `>`) |
| 3.25 Factorial y series (a, b, c) | `ex03_25_factorial_series.cpp` | a) 30! = 265252859812191058636308480000000 · b) e con 20 términos = 2.718281828459046 · c) e^2 con 30 términos = 7.389056098930649 |
| 3.26 Criptografía | `ex03_26_criptografia.cpp` | Menú cifrar/descifrar. Ej.: 1234 → 0189 → 1234 |
| 4.15 Valor de π | `ex04_15_pi.cpp` | Primer valor que empieza por 3.14159: **término 136121** |
| 4.6 ¿Qué hace? | `ex04_06.cpp` | Dibuja un rectángulo de 10 filas × 5 columnas de `@` |
| 4.8 Producto impares | `ex04_08_producto_impares.cpp` | 1·3·5·7·9·11·13·15 = **2027025** |
| 5.1 Expresiones | `ex05_01_expresiones.cpp` | a) 7.5 b) 7.0 c) 0.0 d) 0.0 e) 6.4 f) -6.0 g) -14.0 |
| 5.2 Aparcamiento | `ex05_02_aparcamiento.cpp` | Tabla con 3 coches y total (función `calculateCharges`) |
| 5.6 Aleatorios | `ex05_06_aleatorios.cpp` | Instrucciones para cada intervalo con `<random>` (y equivalente con `rand()`) |
| 5.18 Invertir cifras | `ex05_18_invertir_cifras.cpp` | 7631 → 1367 |
| 5.21 Moneda | `ex05_21_moneda.cpp` | 100 lanzamientos con la función `flip()` y recuento de caras/cruces |
| 5.26 Torres de Hanói | `ex05_26_hanoi.cpp` | Función recursiva de 4 parámetros; con 3 discos: 1→3, 1→2, 3→2, 1→3, 2→1, 2→3, 1→3 |

## Notas

- **5.2:** en el ejemplo del libro el total aparece como 95.50, pero
  20.00 + 25.00 + 50.00 = 95.00, que es lo que calcula el programa.
- **4.15:** la tabla tiene 200 000 líneas; se puede guardar en un fichero con
  `./pi > tabla_pi.txt`.
