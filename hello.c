
#include <stdio.h>

int main(){
    printf("Hola Mundo");
    decirHola("Arturo");
    printf("Lo he modificado desde internet");
    return 0;
    //buen dia señores
}

void decirHola(char* nombre){
    printf("Hola %s, ¿Como estas?", nombre);
}
