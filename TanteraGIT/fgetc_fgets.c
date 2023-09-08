#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char msgC[15], msgS[15]="\0", buffer[10];/*Se inicializa msgS para evitar "basura" al usar strcat*/
	FILE *archivoC, *archivoS;
	
	/*Uso de fgetc*/
	int i = 0;
	archivoC = fopen("ArchivoC.txt","r");   
	if (archivoC != NULL) {
		while( !feof(archivoC) ) {
			msgC[i]=fgetc(archivoC);
			i++;        
		}
		msgC[i]='\0';/*Se agrega el caracter de fin de cadena manualmente*/
		printf("Se ha terminado de leer ArchivoC.txt con fgetc...\n");
	} else printf("Problemas al abrir el archivo.");
	fclose(archivoC);
	
	printf("Contenido de ArchivoC.txt leído con fgetc: \n");
	puts(msgC);
	
	/*Uso de fputs*/
	archivoS = fopen("ArchivoS.txt","r");
    if (archivoS != NULL) {/*Se modifica este ejemplo ligeramente, para cuando no se conoce el tamaño del archivo, leerlo "por partes"*/
		while( !feof(archivoC) ) {
			fgets(buffer,10, archivoS);/*Se leen los siguientes 10 caracteres*/
			strcat(msgS,buffer);/*Se guardan los caracteres leídos*/
		}
		
		printf("\n\nSe ha terminado de escribir ArchivoS.txt con fputs...\n");
	} else printf("Problemas al abrir el archivo.");
	fclose(archivoS);
	
	printf("Contenido de ArchivoS.txt leído con fgets: \n");
	puts(msgS);
	
	return 0;
}

