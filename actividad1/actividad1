# 201902128 Jorge Mario Cano Blanco

## Tipos de Kernel y sus Diferencias

Los kernels son la parte central de un sistema operativo que administra los recursos del sistema y actúa como intermediario entre el hardware y los procesos de software. Hay varios tipos de kernels, cada uno con sus propias características y enfoques de diseño:

### Monolítico:

En un kernel monolítico, todas las funciones del sistema operativo se ejecutan en el espacio de kernel. Los kernels monolíticos tienden a ser rápidos y eficientes, pero pueden ser difíciles de mantener y extender debido a su naturaleza monolítica.
Ejemplos de sistemas operativos con kernels monolíticos incluyen Linux (aunque puede ser modularizado) y versiones antiguas de Windows.

### Microkernel:

Un kernel microkernel delega la mayoría de las funciones del sistema operativo a procesos separados que se ejecutan en el espacio de usuario.
Ejemplos de sistemas operativos con microkernels incluyen QNX y MINIX.

### Híbrido:

Los kernels híbridos combinan características de los kernels monolíticos y microkernels. Este enfoque busca combinar la eficiencia de los kernels monolíticos con la estabilidad y la modularidad de los microkernels.

## User vs Kernel Mode

El modo usuario (user mode) y el modo kernel (kernel mode) son dos niveles de privilegio en un sistema operativo que determinan qué partes del sistema pueden acceder y ejecutar ciertas instrucciones.

### Modo Usuario (User Mode):

En el modo usuario, los programas de aplicación y los procesos se ejecutan. El acceso a los recursos del sistema y las instrucciones privilegiadas están restringidos en este modo. Los programas en modo usuario dependen del kernel para realizar operaciones que requieren privilegios más altos.

### Modo Kernel (Kernel Mode):

El modo kernel es un nivel más privilegiado donde el kernel del sistema operativo y los controladores de dispositivos se ejecutan. Tiene acceso completo al hardware y puede ejecutar cualquier instrucción. Las interrupciones y las excepciones del hardware se manejan en modo kernel. El cambio entre el modo usuario y el modo kernel se realiza mediante una instrucción privilegiada especial (por ejemplo, una llamada al sistema). El kernel gestiona este cambio y garantiza que los programas en modo usuario no puedan acceder directamente al hardware ni realizar operaciones que comprometan la estabilidad del sistema.

## Interrupciones vs Traps

### Interrupciones:

Las interrupciones son señales asincrónicas generadas por dispositivos de hardware o por otros eventos en el sistema que requieren atención inmediata del sistema operativo. Cuando se produce una interrupción, la CPU suspende la ejecución del programa actual, guarda su estado y pasa el control al manejador de interrupciones correspondiente en el kernel. Las interrupciones pueden ser generadas por dispositivos de E/S, temporizadores, errores de hardware, etc.

### Traps:

Los traps (trampas) son eventos síncronos generados por el propio procesador durante la ejecución de un programa debido a condiciones excepcionales o errores. A diferencia de las interrupciones, los traps son generados por el procesador en respuesta a instrucciones específicas ejecutadas por un programa. Los traps pueden ser utilizados para manejar excepciones, como divisiones por cero, acceso a memoria no válido, intentos de ejecutar instrucciones privilegiadas en modo usuario, entre otros.
