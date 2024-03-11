#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void thread_create(void *(*start_routine)(void *), void *arg) {
  pthread_t thread;
  pthread_attr_t attr;

  
  pthread_attr_init(&attr);

  
  pthread_create(&thread, &attr, start_routine, arg);

  pthread_attr_destroy(&attr);
}

int main() {
  pid_t pid;

  pid = fork();
  if (pid == 0) {

    thread_create(funcion_hilo, NULL);

    fork();

  } else if (pid > 0) {
    wait(NULL);
    wait(NULL);
  } else {
    printf("Error al crear el proceso hijo.\n");
    exit(1);
  }

  return 0;
}

void funcion_hilo(void *arg) {
  
  printf("Hola desde el hilo!\n");
}