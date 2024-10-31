#include <stdio.h>

int main(int argc, char **argv){
    for(int i = 1; i<4; i++){
        printf("Hola Mundo %s\n ", argv[i]);
    }
    return 0;
}