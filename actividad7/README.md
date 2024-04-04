El Completely Fair Scheduler (CFS) es un algoritmo de planificación de procesos utilizado en el kernel de Linux. Se diseñó para proporcionar una distribución equitativa del tiempo de CPU entre todos los procesos en ejecución. A continuación, se describen sus características principales y su funcionamiento:

Características:
Equidad de asignación de tiempo: CFS intenta asignar a cada proceso una parte justa del tiempo de CPU, independientemente de la prioridad o la cantidad de procesos en ejecución.

Modelo de tiempo virtual: Utiliza un modelo de tiempo virtual para cada proceso, lo que le permite realizar un seguimiento de cuánto tiempo de CPU ha consumido cada proceso en relación con el tiempo real.

Prioridades dinámicas: No asigna prioridades fijas a los procesos. En su lugar, ajusta dinámicamente las prioridades según el tiempo de CPU utilizado por el proceso.

Sin starvation: CFS está diseñado para evitar la inanición de procesos, garantizando que todos los procesos tengan la oportunidad de ejecutarse.

Funcionamiento:
Árbol de ejecución: CFS organiza los procesos en un árbol de ejecución basado en la estructura de árbol rojo-negro.

Planificación basada en tiempo virtual: En cada ciclo de planificación, el proceso con el menor tiempo virtual acumulado se selecciona para ejecutarse.

Desplazamiento del proceso elegido: Después de cada ciclo, el proceso seleccionado se mueve hacia la raíz del árbol, lo que le otorga una mayor prioridad virtual en el próximo ciclo de planificación.

Actualización de tiempos virtuales: Después de cada ciclo de planificación, se actualizan los tiempos virtuales de todos los procesos en función de la cantidad de tiempo de CPU que han consumido.

Adaptación dinámica de prioridades: Si un proceso utiliza más tiempo de CPU, su tiempo virtual aumenta, lo que reduce su prioridad en comparación con otros procesos.

Evitar la inanición: CFS garantiza que ningún proceso se quede sin ejecutar durante largos períodos de tiempo, asignando el tiempo de CPU de manera equitativa entre todos los procesos.