### ¿Cuántos procesos únicos son creados?

Se crean 3 procesos únicos:

Proceso padre: Es el proceso original que ejecuta el código.
Proceso hijo 1: Se crea con la primera llamada a fork().
Proceso hijo 2: Se crea con la segunda llamada a fork() en el proceso hijo 1.


### ¿Cuántos hilos únicos son creados?

Se crea 1 hilo único en el proceso hijo 1.