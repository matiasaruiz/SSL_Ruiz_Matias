#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANT 10

int obtenerCadenaDeArchivo(FILE* f, char* cadena);

int evaluacionDeCadena(char* cadena);

int main()
{
    int matrizTT[6][6] = {
        matrizTT[0][0] = 0,
        matrizTT[0][1] = 2,
        matrizTT[0][2] = 2,
        matrizTT[0][3] = 6,
        matrizTT[0][4] = 6,
        matrizTT[0][5] = 6,
        matrizTT[1][0] = 5,
        matrizTT[1][1] = 5,
        matrizTT[1][2] = 6,
        matrizTT[1][3] = 6,
        matrizTT[1][4] = 3,
        matrizTT[1][5] = 6,
        matrizTT[2][0] = 2,
        matrizTT[2][1] = 2,
        matrizTT[2][2] = 2,
        matrizTT[2][3] = 6,
        matrizTT[2][4] = 6,
        matrizTT[2][5] = 6,
        matrizTT[3][0] = 4,
        matrizTT[3][1] = 4,
        matrizTT[3][2] = 4,
        matrizTT[3][3] = 4,
        matrizTT[3][4] = 6,
        matrizTT[3][5] = 6,
        matrizTT[4][0] = 4,
        matrizTT[4][1] = 4,
        matrizTT[4][2] = 4,
        matrizTT[4][3] = 4,
        matrizTT[4][4] = 6,
        matrizTT[4][5] = 6,
        matrizTT[5][0] = 5,
        matrizTT[5][1] = 5,
        matrizTT[5][2] = 6,
        matrizTT[5][3] = 6,
        matrizTT[5][4] = 6,
        matrizTT[5][5] = 6,
    };

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
        
            case '0': 
               /*Algo*/
                break;
            case '1': 
               /*Algo*/
                break;
            case '2': 
               /*Algo*/
                break;
            case '3': 
               /*Algo*/
                break;
            case '4': 
               /*Algo*/
                break;
            case '5': 
               /*Algo*/
                break;
            case '6': 
               /*Algo*/
                break;
            case '7': 
               /*Algo*/
                break;
            case '8': 
               /*Algo*/
                break;        
            case '9': 
               /*Algo*/
                break;
            case 'a': 
               /*Algo*/
                break;
            case 'b': 
               /*Algo*/
                break;
            case 'c': 
               /*Algo*/
                break;
            case 'd': 
               /*Algo*/
                break;
            case 'e': 
               /*Algo*/
                break;
            case 'f': 
               /*Algo*/
                break;
            case 'A': 
               /*Algo*/
                break;
            case 'B': 
               /*Algo*/
                break;
            case 'C': 
               /*Algo*/
                break;
            case 'D': 
               /*Algo*/
                break;
            case 'E': 
               /*Algo*/
                break;
            case 'F': 
               /*Algo*/
                break;                                                                                                                           
            default: 
                columna = 5;
                fila = 5;
                break;
        
        }
        i++;
        caracter = cadena[i];
    }

    return fila;
}