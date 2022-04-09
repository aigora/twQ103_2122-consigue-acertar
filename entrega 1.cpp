#include <stdio.h>
int main(){
	int nombre, opcion;
	
	printf ("dime tu nombre:\n");
	scanf ("%f", &nombre);
	
	fflush (stdin);
	
	printf ("introduce una opcion:\n");
	printf ("a-jugar\n");
	printf ("b- ver historial de jugadores\n");
	printf ("c- ver ranking de jugadores\n");
	scanf ("%c", &opcion);
	
	if (opcion == 'a'){
		printf ("el juego\n");
	}
	else if (opcion == 'b'){
		printf ("ver el historial\n");
	}
	else if (opcion == 'c'){
		printf ("ranking \n");
	}
	else{
		printf ("error\n");
	}

}
