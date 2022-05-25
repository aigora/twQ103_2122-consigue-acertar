#include <stdio.h>
#include <string.h>
#define N 1

struct lista{
    char nombre[100];
    char contrasennya[100];
    int registro;
};

void historia(void);  //funcion para introducir al usuario en la historia
int piedrapapeltijera(char c1[], char c2[]){ //funcion piedra papel tijera
    int i;
    for (i=0;i<1;i++){

     if (c1[i] == 'I' && c2[i] == 'T'){
        printf ("ganas el otro jugador elijio tijera\n");
        printf("la letra obtenida es A\n");
    }

    else if (c1[i] == 'P' && c2[i] == 'T'){
        printf (" pierdo el otro jugador elijio tijera\n");

    }
    else if (c1[i] == 'T' && c2[i] == 'T'){
        printf ("empate\n");

    }

    else {
        printf ("has metido mal la letra\n");
    }
}
}

int textoUltiPreg(){  //funcion ultima pregunta
        printf("Durante la huida del lugar del asesinato, se han atravesado diversas\n");
printf("pruebas con las cuales se han ido obteniendo letras:i,z,p,l,i,m,a,e; a partir de estas consiga averiguar la palabra\n");
        printf("Introduce la palabra que crees que es:\n");
}

int main (){
    FILE * fichero;
    struct lista usuarios[500];
    int inicio,numeroUsuarios=0,opcion, cont, numeracion=0, i=0, j=0, a, b, n=0;
    int respuesta2 = 0,respuesta3 = 0,respuesta4 = 0,respuesta5 = 0;
    char respUno[10] = "carbono",respDos[10] = "rocinante",respTres[10] = "venecia",solucion[10] = "sol",solucion2[30] = "a hierro muere",solucion3[30] = "otorga",solucion4[30] = "codigo",solucion5[30] = "sodio",solucion6[30] = "datil",limpieza[20]={'l','i','m','p','i','e','z','a'},op1[N], op2[N]={'T'},Posibilidad[20];
    char preguntauno, preguntados, preguntatres,respuesta, frase1, frase2, respuesta6, respuesta7, respuesta8,o1, o2, o3;
    int pregUno, pregDos, pregTres, pregCuatro;
    
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
        
        if (opcion == 'a') {
            
            historia();
            
            printf ("EMPEZAMOS\n");
            printf(" --------------------  ");
            printf("       ¡TRIVIAL!       ");
            printf(" --------------------\n");
            
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
            
             printf(" --------------------  ");
             printf("      ¡ADIVINANZA!      ");
             printf(" --------------------\n");
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
    
    
            printf (" ---------------------------");
            printf ("     ¡ADIVINA EL REFRAN!    ");
            printf (" ---------------------------");
            do {
                printf ("El que a hierro mata...\n");
                scanf("%s",&frase1);
                cont=0;
                if (strcmp (solucion2,&frase1) != 0) {
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
                if (strcmp (solucion3,&frase2) != 0) {
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
                if (respuesta2 == 6) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
    
            do {
                printf(" Siguiente numero\n");
                printf(" Es la solucion de esta operacion: 54/6");
                scanf("%d", &respuesta3);
                if (respuesta3 == 9) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
    
            do {
                printf(" Ultimo numero\n");
                printf(" Es el numero de carbonos que tiene el benceno");
                scanf("%d", &respuesta4);
                if (respuesta4 == 6) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
    
            do {
                printf(" El codigo es...\n");
                scanf("%d",&respuesta5);
                if (respuesta5 == 696) {
                    cont=1;
                } else {
                    cont=0;
                }
            } while (cont==1);
            
            printf (" ENHORABUENA HAS ACERTADO EL CODIGO!!\n has obtenido la letra L");
            
                
            printf(" --------------------  ");
            printf("   ¡SOPA DE LETRAS!    ");
            printf(" --------------------\n");
            
            
            printf(" F  T  D  R  A  O  E  ");
            printf(" H  S  I  A  S  M  L  ");
            printf(" O  G  I  D  O  C  E  ");
            printf(" D  T  E  R  D  P  S  ");
            printf(" E  A  R  I  I  O  R  ");
            printf(" T  U  P  V  O  D  F  ");
            printf(" D  A  T  I  L  F  C\n");
                
            printf(" ----PISTAS----\n");
            
            do {
                printf("La primera palabra es relativo a la informatica\n");
                scanf("%s", &respuesta6);
                cont=0;
                if (strcmp (solucion4,&respuesta6) != 0 ) {
                    cont=1;
                } else {
                    cont=0;
                    }
                } while (cont==1);
                
            do {
                printf("Siguinete pista:\n La siguiente palabra es un elemento de la tabla periodica\n");
                scanf("%s",&respuesta7);
                cont=0;
                if (strcmp (solucion5,&respuesta7) !=0 ) {
                    cont=1;
                } else {
                    cont=0;
                    }
                } while (cont==1);
    
            do {
                printf("Ultima pista\n La ultima palabra es una fruta exotica\n");
                scanf("%s",&respuesta8);
                cont=0;
                if (strcmp (solucion6,&respuesta8) != 0) {
                    cont=1;
                } else {
                    cont=0;
                    }
                } while (cont==1);

            printf("ENHORABUENA HAS ADIVINADO LAS 3 PALABRAS\n La letra que has conseguido es la M\n");
            
            printf(" --------------------  ");
            printf("     ¿CUANTO SABES?    ");
            printf(" --------------------\n");
            printf("A continuacion se mostraran una serie de preguntas. Se debe escoger la opcion que se crea correcta. Solo hay una opcion correcta para cada pregunta.");

            do{
            printf("Pregunta1:\nDada la siguiente ecuacion, escoja la solucion correcta:\nf(x)=x^3+x^2+x^1+x^0, siendo x=2.\n1)13\n2)14\n3)15\n4)16\n");
            scanf("%d",&pregUno);
            }while(pregUno!=3);
            printf("Respuesta correcta!");

            do{
            printf("Pregunta2:\n¿Que estrella de Hollywood pantento, en la Segunda Guerra Mundial, un sistema para que no se detectaran los torpedos?\n1)Lauren Bacall\n2)Hedy Lamarr\n3)Joan Blondell\n4)Bette Davis\n");
            scanf("%d",&pregDos);
            }while(pregDos!=2);
            printf("Respuesta correcta!");

            do{
            printf("Pregunta3:\nUna tarjeta SD es un dispositivo de:\n1)Compresion de video\n2)Memoria\n3)Procesamiento de audio\n4)Comunicacion remota\n");
            scanf("%d",&pregTres);
            }while(pregTres!=2);
            printf("Respuesta correcta!");

            do{
            printf("Pregunta4:\n¿Cuantos astronautas han tenido el privilegio de andar sobre la luna?\n1)6\n2)3\n3)12\n4)20\n");
            scanf("%d",&pregCuatro);
            }while(pregCuatro!=3);
            printf("Respuesta correcta!\n");
            printf("Prueba superada !!\nHas obtenido la letra I\n");
            //ahora el juego de piedra papel tijero el cual es llamado medinate una funcion
            do{
    printf ("jugador elige: piedra(I), tijera (T) y papel (P) (meter mayusculas)\n");
    gets(op1);

    printf ("%d",piedrapapeltijera(op1,op2));

    }while (op1[0]!='I');
//verdadero o falso
    printf("America fue descubierta en 1492 verdad(V)  o falso(F)\n");
    scanf("%c",&o1);
    if (o1 == 'V'){
        printf("has ganado la letra obtenida es E\n");
    }
    else if (o1 == 'F'){
        printf("no has acertado\n");
            fflush (stdin);
        printf("la nueva pregunta es si el mar es azulresponde con V o F\n");
        scanf("%c", &o2);
        if(o2 == 'V'){
            printf("has acertado la letra es la E\n");
        }
        else if (o2 == 'F'){
            printf("no has acertado\n");
                fflush (stdin);
            printf("la nueva pregunta es si 2+2=4 responde con V o F\n");
            scanf("%c", &o3);
            if (o3 == 'V'){
                printf("la respuesta es correcta la letra obtenida es la E\n");
            }
            else if(o3 == 'F'){
                printf("no has acertado pero la letra es la E\n");
            }
            else{
                printf("error\n");
            }
        }
        else{
            printf("error\n");
        }
    }
        else{
            printf("error\n");
        }
//ejercicio final, averiguar palabra llamado mediante funcion
    do{
    
        printf("%d",textoUltiPreg());
        gets(Posibilidad);
    }
    while(strcmp(limpieza,Posibilidad)!=0);

        
                
                
        }  
        else{
            printf ("error\n");
        }
 
    }

void historia(){
    printf("Era un dia soleado. Las oficinas abrían pronto y Daniel, el conserje, se disponía a poner todo en orden. Enciende el aire, las luces, prepara los despachos...\nPercibe un extraño olor y observa una luz encendida que creía recordar haber apagado el dia anterior.Se acerca y para su sorpresa encuentra al jefe desvanecido sobre su escritorio.\nLlama a la policia y comienza la investigacion.\n\n");
}
