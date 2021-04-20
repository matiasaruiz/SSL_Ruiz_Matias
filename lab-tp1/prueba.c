#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANT 10

int obtenerCadenaDeArchivo(FILE* f, char* cadena);

int evaluacionDeCadena(char* cadena);

int matrizTT[4][3];


int main()
{
    FILE* archivoEntrada = fopen("texto.txt","rt");
    FILE* archivoSalida = fopen("salida.txt","wt+");
    int resultado, n = 0;
    char* cadena = (char*) malloc(CANT);

    while ( n == 0 )
    {
        n = obtenerCadenaDeArchivo(archivoEntrada,cadena);

        fprintf(archivoSalida, "\n La cadena leida del archivo es: %s", cadena);

        resultado = evaluacionDeCadena(cadena);
        
        if (resultado ==2)
        {
            fprintf(archivoSalida, "\n La cadena es Aceptada \n\n\n");
        } else {
             fprintf(archivoSalida, "\n La cadena es Rechasada \n\n\n");
        }
        
    }
    
    free(cadena);
    fclose(archivoEntrada);
    fclose(archivoSalida);

    return 0;
}

int obtenerCadenaDeArchivo(FILE* f, char* cadena){
    
    char c;
    int punto = 0;

    int i = 0;

    fread(&c,sizeof(char),1,f);
    
    while (c != ',' && c != '.' )
    {
        cadena[i] = c;
        i++;
        fread(&c,sizeof(char),1,f);
    }
    if ( c == '.' )
    {
        punto = 1;
    }
    
    cadena[0] = '\0';
    
    return punto;
}


int evaluacionDeCadena(char* cadena) {
    int i = 0;

    int fila = 0;
    int columna = 0;

    int longitudCadena = strlen(cadena);

    char caracter = cadena[i];

    while( i<longitudCadena){
        
        switch( caracter ){
        
            case 'a': columna = 0;
                fila = matrizTT[fila][columna];
                break;
            case 'b': columna = 1;
                fila = matrizTT[fila][columna];
                break;
            default: columna = 2;
                fila = 3;
                break;
        
        
        }

        i++;
        caracter = cadena[i];
    
    }

    return fila;
}