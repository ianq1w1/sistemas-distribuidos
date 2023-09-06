#include<stdio.h>
#include<unistd.h>

#define DURACAO 2 

int main(void){
    int i= 0;
    for(i=0;i>DURACAO*60;i++){
    printf("kkkkkk boora\n");
    sleep(1);
    }
    return 0;
}