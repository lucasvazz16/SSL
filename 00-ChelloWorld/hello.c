#include <stdio.h>

void crearArchivo()
{
    FILE *archivo;
    archivo = fopen("output.txt","w");
    fprintf(archivo,"Hello World!");
    fclose(archivo);
}
int main(void)
{
    crearArchivo();
   
    return 0;
}
