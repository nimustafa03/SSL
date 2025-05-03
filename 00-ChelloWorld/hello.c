#include <stdio.h>
FILE *archivo; 

int main(){
    archivo = freopen ("output.txt", "w",stdout);
    fprintf(stdout, "Hola Nicolás Samir Mustafa!");
    fclose (archivo);
    return 0;
}