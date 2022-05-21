/*Autor: Oscar Eduardo Fletes Ixta, 01/04/2022
	programa que debe mostrar un menu donde se indique que funcion quiere probar
	(usar la opcion 0 para salir), una vez que se elegida, el programa pide la(s) cadena(s) 
	necesaria(s) para hacer la demostracion: debe imprimir una breve descripcion de lo que hace 
	la funcion y da el resultado.
	
	Programa en elnguaje c que hace la ejecucion de las funcones para cadenas de caracteres mas comunes de la libreria string.h,
	con el uso prototipos de funciones, funciones, switch, ciclo do-while, validacion del menu.
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo char, int
		* Uso de condiciones
		* Uso de la libreria String.h
		* Funciones para cadenas de caracteres
		* Funciones con parametros	
		* Prototipos de funciones
		* Ciclo do-while
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables char, int, condiciones, uso de la libreria string, funciones para cadenas de caracteres, 
	uso de funciones con parametros, prototipos de funciones, ciclo do-while, printf para imprimirl los valroes de las variables.

	Breve descripcion:
	El programa  debe mostrar un menu donde se indique que funcion quiere probar (usar la opcion 0 para salir), una vez que se elegida, 
	el programa pide la(s) cadena(s) necesaria(s) para hacer la demostracion: debe imprimir una breve descripcion de lo que hace la funcion y da el resultado.
	*/

#include<stdio.h>//libreria para el cuerpo de c
#include<string.h>//libreria para uso de funciones para cadenas de caarcteres
#define MAX 25000 //macros 

//Prototipos
int menu();//funcion 
int validarEnteros(int inferior, int superior);//Funcion con parametros 
void funcion1(char texto[]);//Funcion con parametros 
void funcion2(char x[], char y[]);//Funcion con parametros 
void funcion3(char x[], char y[]);//Funcion con parametros 
void funcion4(char x[], char y[]);//Funcion con parametros 
void funcion5(char x[], char y[]);//Funcion con parametros 
void funcion6(char x[], char y[]);//Funcion con parametros 
//Principal 
int main(){
	int opcion;//variables de enteros
	char text[MAX];//variable de cadenas con limite que tenga MAX 
	char s1[MAX], s2[MAX];//variable de cadenas con limite que tenga MAX 
	
	printf("Las mayorias de las cadenas pueden soportar hasta dos mil millones de caracteres. \n");//imprime mensaje 
	printf("Por lo tanto todas las cadenas de este programa estan limitadas a soportar 25000 caracteres \n");//imprime mensaje 
	do{//ciclo do-while
		opcion=menu();//llama la funcion menu
		switch(opcion){
			case 0: printf("Hasta luego...\n");//imprime mensaje 
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 1: funcion1(text);//ejecuta la funcion1 con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 2: funcion2(s1,s2);//ejecuta la funcion2 con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 3: funcion3(s1,s2);//ejecuta la funcion3 con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 4: funcion4(s1,s2);//ejecuta la funcion4 con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 5: funcion5(s2,s1);//ejecuta la funcion5 con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 6: funcion6(s1,s2);//ejecuta la funcion5 con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
		}
	}while(opcion!=0);//do-while termina cuando se inserta un numero diferente de 0
	return 0;	
}

int menu(){
	int opcion;
	printf("-----------MENU PRINCIPAL-----------\n");//imprime mensaje
	printf("0. Salir\n");//imprime mensaje
	printf("1. Usar la funcion strlen\n");//imprime mensaje
	printf("2. Usar la funcion strcat\n");//imprime mensaje
	printf("3. Usar la funcion strcpy\n");//imprime mensaje
	printf("4. Usar la funcion strcmp\n");//imprime mensaje
	printf("5. Usar la funcion strncpy\n");//imprime mensaje
	printf("6. Usar la funcion strstr\n");//imprime mensaje
	printf("------------------------------------\n");//imprime mensaje
	printf("Selecciona uan opcion: ");//imprime mensaje
	opcion=validarEnteros(0,6);//valida que solo sean 0-6
	return opcion;
}

int validarEnteros(int inferior, int superior){//funcion validar enteros(parametros)
	int valor;//variables de enteros
	do{//ciclo do-while
		scanf("%d",&valor);//lee el numero insertado por el teclado
		if(valor<inferior || valor>superior){//condicon que si valor es menor que inferior o valor mayor que superior
			printf("Dato invalido!!! Debe estar entre (%d-%d). Vuelva a introducirlo: \n",inferior,superior);//imprime mensaje
			//inferior,superior lee los valores insertados en teclado (%d-%d)
		}
	}while(valor<inferior || valor>superior);//do-while termina con la misma condicon que if
	return valor;
}

void funcion1(char texto[]){//funcion funcion1(parametros)
	char text[MAX];//variable de cadenas con limite que tenga MAX 
	int longitud;//variables de enteros
	fflush(stdin);//borra archivo de teclado, para poder ingresar la cadena
	printf("La funcion strlen calcula el número de caracteres de la cadena apuntada \n");//imprime mensaje
	printf("Introduce la cadena: ");//imprime mensaje
	fgets(text,MAX,stdin);//lee la cadena insertada (s1,cantidad maxima de caracteres,stdin)
	if(text[strlen(text)-1] =='\n'){//elimina el enter despues de poner la cadena
		text[strlen(text)-1]=0;
	}
	
	longitud=strlen(text);//calcula la longitud de la cadena 
	printf("La longitud de la cadena es %d\n",longitud);//imprime la salida de longitud
	
}

void funcion2(char x[], char y[]){//funcion funcion2(parametros)
	char s1[MAX];//variable de cadenas con limite que tenga MAX 
	char s2[MAX];//variable de cadenas con limite que tenga MAX 
	fflush(stdin);//borra archivo de teclado, para poder ingresar la cadena
	printf("La funcion strcat agrega una copia de la cadena apuntada por s2 (incluyendo el caracter nulo) al final de la cadena \n");//imprime mensaje
	printf("apuntada por s1. El caracter inicial de s2 sobrescribe el caracter nulo al final de s1 \n");//imprime mensaje
	printf("Introduce la cadena s1: ");//imprime mensaje
	fgets(s1,MAX,stdin);//lee la cadena insertada (s1,cantidad maxima de caracteres,stdin)
	printf("Introduce la cadena s2: ");//imprime mensaje
	fgets(s2,MAX,stdin);//lee la cadena insertada (s2,cantidad maxima de caracteres,stdin)
	printf( "s1=%s\t", s1 );//Imprime la cadena s1
	printf( "s2=%s\n", s2 );//Imprime la cadena s2
	strcat( s1, s2 );//copia la cadena
	printf( "s1=%s\n", s1 );//agrega la cadena deseada a copiar 	
}

void funcion3(char x[], char y[]){//funcion funcion3(parametros)
	char s1[MAX];//variable de cadenas con limite que tenga MAX 
	char s2[MAX];//variable de cadenas con limite que tenga MAX 
	fflush(stdin);//borra archivo de teclado, para poder ingresar la cadena
	printf("La funcion strcpy recibe dos parametros, primero la string donde se va a copiar el contenido, y segundo la string \n");//imprime mensaje
	printf("del cual sera copiado su contenido. \n");//imprime mensaje
	printf("Introduce la cadena s1: ");//imprime mensaje
	fgets(s1,MAX,stdin);//lee la cadena insertada (s1,cantidad maxima de caracteres,stdin)
	printf("Introduce la cadena s2: ");//imprime mensaje
	fgets(s2,MAX,stdin);//lee la cadena insertada (s2,cantidad maxima de caracteres,stdin)
	strcpy(s1, s2); //Lo que hay en s1 se copia a s2
	printf("Cadena copiada: %s \n", s2);//imprime la copia
}

void funcion4(char x[], char y[]){//funcion funcion4(parametros)
	char s1[MAX];//variable de cadenas con limite que tenga MAX 
	char s2[MAX];//variable de cadenas con limite que tenga MAX 
	int i;//variables de enteros
	fflush(stdin);//borra archivo de teclado, para poder ingresar la cadena
	printf("La funcion strcmp Compara la cadena apuntada por s1 con la cadena apuntada por s2.\n");//imprime mensaje
	printf("Introduce la cadena s1: ");//imprime mensaje
	fgets(s1,MAX,stdin);//lee la cadena insertada (s1,cantidad maxima de caracteres,stdin)
	printf("Introduce la cadena s2: ");//imprime mensaje
	fgets(s2,MAX,stdin);//lee la cadena insertada (s2,cantidad maxima de caracteres,stdin)
	printf( "s1=%s\t", s1 );//Imprime la cadena s1
	printf( "s2=%s\n", s2 );//Imprime la cadena s2
	i=strcmp(s1,s2);//usamos la variable i para usar la funcion
	printf("s1 es ");//Imprime la cadena s1
	if(i>0){//condicon, si i es mayor que 0
		printf("Menor que ");//imprime mensaje
	}else if(i<0){//condicon, si i es menor que 0
		printf("Mayor que ");//imprime mensaje
	}else{//de lo contrario
		printf("Igual a");//imprime mensaje
	}
	printf("s2\n");//imprime la cadena s2
}

void funcion5(char x[], char y[]){//funcion funcion5(parametros)
	char s1[MAX];//variable de cadenas con limite que tenga MAX 
	char s2[MAX];//variable de cadenas con limite que tenga MAX 
	int c;//variables de enteros
	fflush(stdin);//borra archivo de teclado, para poder ingresar la cadena
	printf("La funcion srtcpy Copia no mas de n caracteres (caracteres posteriores al caracter nulo no son copiados)\n");//imprime mensaje
	printf("de la cadena apuntada por s2 a la cadena apuntada por s1.\n");//imprime mensaje
	printf("Introduce la cadena s2: ");//imprime mensaje
	fgets(s2,MAX,stdin);//lee la cadena insertada (s2,cantidad maxima de caracteres,stdin)
	printf("¿Cuantos caracteres quieres copiar? ");//imprime mensaje
	scanf("%d",&c);//lee el numero insertado por el teclado
	strncpy( s1, s2, c );//usamos la funcion con la variable c para copiar los caracteres deseados
	printf( "s2=%s\n", s2 );//imprimela cadena insertada 
	printf( "s1=%s\n", s1 );//imprime los caracteres que se insertaron a copiar de s2
}

void funcion6(char x[], char y[]){//funcion funcion6(parametros)
	char s1[MAX];//variable de cadenas con limite que tenga MAX 
	char s2[MAX];//variable de cadenas con limite que tenga MAX 
	char*resultado=0;//variable de cadenas *mensjase
	fflush(stdin);//borra archivo de teclado, para poder ingresar la cadena
	printf("La funcion strstr Localiza la primera aparicion en la cadena apuntada por s1 de la secuencia de caracteres \n");//imprime mensaje
	printf("(excluyendo el caracter nulo) en la cadena apuntada por s2 \n");//imprime mensaje
	printf("Introduce la cadena s1: ");//imprime mensaje
	gets(s1);//lee la cadena insertada s1
	//con fgest al ejecutar strstr nos marca un valor null
	//fgets(s1,MAX,stdin);
	printf("Introduce la cadena s2: ");//imprime mensaje
	gets(s2);//lee la cadena insertada s2
	//fgets(s2,MAX,stdin);
	printf( "s1=%s\n", s1 );//Imprime la cadena s1
	printf( "s2=%s\n", s2 );//Imprime la cadena s2
	resultado= strstr(s1, s2);//usamos la variable para la funcion strstr
	printf( "strstr(s1,s2) = %s\n",resultado);//imprime el resultado de la funcion 
}
