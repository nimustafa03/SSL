#include <stdio.h>
#include <conio.h>


FILE* archivo;
const char *msg = "Hola, Nicolas Samir Mustafa!\n";

int main() {
    
    archivo = fopen("output.txt", "w");

    fputs(msg,stdout);
    fputs(msg,archivo);
    fflush(stdout);
    fclose(archivo);
    getchar();
    return 0;

}