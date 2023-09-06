#include<stdio.h>
#include<pthread.h>

int imprimir(int memory[], int size){
    for (int i=0; i < size; i++){
        printf("%d\n", memory[i]);
    }
    pthread_exit(NULL);
}

int main(void){
  int memory[5];
  armazenarDados(memory, 5);

  pthread_t thread;

  if(pthread_create(&thread, NULL, imprimir, memory) != 0){
    fprintf(stderr, "erro ao criar a thread. \n");
    return 1;
  }

  pthread_join(thread, NULL);

  return 0;
}