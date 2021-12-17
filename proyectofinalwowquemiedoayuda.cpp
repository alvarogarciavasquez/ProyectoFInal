/*García Vázquez Álvaro
González Cano Daphne Sofía
Pluma Amaro Iker Antonio
Zacapantzi Quintero Diane
16/12/2021
Programa que aplica filtros a imagenes mediante convolucion de matrices
PixelConverter.exe*/
#include <stdio.h>
#include <string.h>
void leerImg(FILE**);
int main(void){
	FILE* imgOg;
	int opcion;
	printf("\t\t\tPixel Converter");
	printf("\nEste programa aplica filtros a imagenes \".pmm\" y devuelve el resultado en una imagen nueva");
	do{
	printf("\nDeseas comenzar?\t1.-Si \tNo\n");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:leerImg(&imgOg); break;
		case 2:printf("si ok entiendo :c"); break;
		case 3:printf("Seleccione una opcion correcta"); 
	}	
	}while(opcion<1 or opcion>2);
}
void leerImg(FILE** imgOg){
	char direccion[128];
	char *tkn;
	do{
	printf("\nEscriba el nombre de la imagen (con la extension): ");
	fflush(stdin);
	fgets(direccion,128,stdin);
	tkn=strtok(direccion,"\n");
	*imgOg=fopen(tkn,"r");
	if(*imgOg!=NULL){
	printf("\nImagen abierta con exito");
	}else{
		printf("\nLa imagen no se pudo encontrar o no existe");
	}	
	}while(*imgOg==NULL);
}
