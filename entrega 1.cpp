
#include <stdio.h>
#include <string.h>

struct lista{
    char nombre[100];
    char contrasennya[100];
    int registro;
};

int main (){
    struct lista usuarios[500];
    int inicio,numeroUsuarios=0,opcion, cont;
    int numeracion=0, i=0, j=0, a, b, n=0;
    FILE * fichero;
    int solucion4 = 6;
    int solucion5 = 9;
    int solucion6 = 6;
    int solucion7 = 696;
    int respuesta2, respuesta3, respuesta4, respuesta5;
    char respUno[10] = "carbono";
    char respDos[10] = "rocinante";
    char respTres[10] = "venecia";
    char solucion[10] = "sol";
    char solucion2[30] = "a hierro muere";
    char solucion3[30] = "otorga";
    char preguntauno, preguntados, preguntatres,respuesta, frase1, frase2;
    
    
fichero=fopen("usuarios.txt","r");
if(fichero==NULL){ //comprobamos que el fichero funciona
    printf("Error en la apertura de ficheros.\n");
    return 0;
}

//Guardamos los nuevos usuarios
    
while(fscanf(fichero,"%d %s %s", &usuarios[i].registro,usuarios[i].nombre,usuarios[i].contrasennya)!=EOF){
    numeroUsuarios++;
    i++;
}
fclose(fichero);

printf("1.Nuevo usuario\n2.Iniciar sesion\n");
scanf("%d",&inicio);
fflush(stdin);
switch(inicio){
    
//Vamos a introducir un nuevo usuario:
        
    case 1:
        usuarios[i].registro=i+1;
        
        //pedimos nombre y contrasennya
        
        printf("Introduzca su nombre de usuario:\t");
        fflush(stdin);
        gets(usuarios[i].nombre);
        printf("Introduzca su contrasenya:\t");
        fflush(stdin);
        gets(usuarios[i].contrasennya);
        
  //una vez introducidos nombre y contraseña vamos a comprobar que no exista en el fichero. En caso de ya existir, se pedirá de nuevo, de lo contrario, se añadirá al fichero
        
        for(a=0;a<numeroUsuarios;a++){ //la variable numeroUsuarios irá incrementando según se vayan nuevos usuarios
            
            for(j=0;j<i;j++){
                if(strcmp(usuarios[i].nombre,usuarios[j].nombre)==0){
                    printf("El nombre de usuario escogido ya existe. Por favor elija otro:\t");
                    fflush(stdin);
                    gets(usuarios[i].nombre);
                }
            }
        }
        fichero=fopen("usuarios.txt","w");
        if(fichero==NULL){ //comprobamos que el fichero funciona
            printf("Error\n");
            return 0;
        }
        for(n=0;n<=i;n++){
            fprintf(fichero,"%d %s %s\n", usuarios[n].registro,usuarios[n].nombre,usuarios[n].contrasennya);
        }
        fclose(fichero);

        b=i;
           
    break;
        
    case 2: //Usuario previamente registrado
    
        do{ //se confirma que el nombre y contraseña introducidos coinciden con alguno ya existente en el fichero
            printf("Nombre de usuario:\t");
            fflush(stdin);
            gets(usuarios[i].nombre);
            printf("Contrasennya:\t");
            fflush(stdin);
            gets(usuarios[i].contrasennya);
            
            for(b=0;b<numeroUsuarios;b++){
                if((strcmp(usuarios[i].nombre,usuarios[b].nombre)==0)&&(strcmp(usuarios[i].contrasennya,usuarios[b].contrasennya)==0)){
                    numeracion++;
                    break;
                }
            }
            if(numeracion==0){ //en caso de que no coincida con un usuario registrado no le dejara continuar
                printf("El nombre de usuario o la contrasennya introducidos ha sido incorrecto, por favor introduzcalos de nuevo.\n");
            }
        }while(numeracion==0);
        
    break;
    }
    
    printf ("introduce una opcion:\n");
        printf ("a-jugar\n");
        printf ("b- ver historial de jugadores\n");
        printf ("c- ver ranking de jugadores\n");
        scanf ("%d", &opcion);
        
        if (opcion == 'a'){
            printf ("EMPEZAMOS\n");
            printf("----TRIVIAL----");
            
            //hacemos un bucle do-while para que nos haga la pregunta en caso de no introducir la respuesta correcta. Una vez introducida la correcta pasamos a la siguiente pregunta
            do
            {
            printf("¿Que elemento esta presente en todas las moleculas organicas?\n");
                scanf("%s",&preguntauno);
                cont=0;
                if(strcmp(respUno,&preguntauno) != 0){
                    cont=1;
                }else{
                    cont=0;
                }
            }
            while(cont==1);

            do
            {
            printf("¿Como se llama el caballo de Don Quijote de la Mancha?\n");
                scanf("%s",&preguntados);
                cont=0;
                if(strcmp(respDos,&preguntados) != 0){
                    cont=1;
                }else{
                    cont=0;
                }
            }
            while(cont==1);
            
            do
            {
                printf("¿Cual era la ciudad hogar de Marco Polo?\n");
                scanf("%s",&preguntatres);
                cont=0;
                if(strcmp(respTres,&preguntatres) != 0){
                    cont=1;
                }else{
                    cont=0;
                }
            }
            while(cont==1);
           
            printf("Tivial superado !!\nHas obtenido la letra Z\n");
            
            printf("----ADIVINANZA----");
            do
            {
                printf("¿Qué entra en el río y no se moja?\n");
                scanf("%s",&respuesta);
                cont=0;
                if(strcmp(solucion,&respuesta) != 0){
                    cont=1;
                }else{
                    cont=0;
                }
            }
            while(cont==1);
           
            printf("Adivinanza superada!!\nHas obtenido la letra P.\n");
        }
    
    
            printf (" ---------------------------");
            printf ("     ¡ADIVINA EL REFRAN!    ");
            printf (" ---------------------------");
            do {
                printf ("El que a hierro mata...\n");
                scanf("%s",&frase1);
                cont=0;
                if (strcmp (solucion2,&frase1) = 1) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
    
            printf("Perfecto siguiente refran");
  
            do {
                printf ("El que calla ....\n");
                scanf("%s",&frase2);
                cont=0;
                if (strcmp (solucion3,&frase2) = 1) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
    
            printf(" ENHORABUENA PRUEBA SUPERADA\n Has obtenido la letra I\n Sigue jugando!!\n");
    
    
            printf (" ------------------------ ");
            printf ("   !AVERIGUA EL CODIGO¡   ");
            printf (" ------------------------ ");
    
            do {
                printf(" Primer numero\n");
                printf(" Es la posición del Berilio en la tabla periódica");
                scanf("%d", &respuesta2);
                if (strcmp (solucion4,&respuesta2) != 0) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
    
            do {
                printf(" Siguiente numero\n");
                printf(" Es la solucion de esta operacion: 54/6");
                scanf("%d", &respuesta3);
                if (strcmp (solucion5,&respuesta3) != 0) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
    
            do {
                printf(" Ultimo numero\n");
                printf(" Es el numero de carbonos que tiene el benceno");
                scanf("%d", &respuesta4);
                if (strcmp (solucion6,&respuesta4) != 0) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
    
            do {
                printf(" El codigo es...\n");
                scanf("%d",respuesta5);
                do {
                if (strcmp (solucion7,&respuesta5) != 0) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
            
            printf (" ENHORABUENA HAS ACERTADO EL CODIGO!!\n has obtenido la letra L");
            
                
            printf(" --------------------");
            printf("   ¡SOPA DE LETRAS!  ");
            printf(" --------------------");
                
            
                
                
               
            
        
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

