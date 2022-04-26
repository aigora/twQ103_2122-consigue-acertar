#include <stdio.h>
#include <string.h>

struct lista{
    char nombre[100];
    char contrasennya[100];
    int registro;    
};

int main (){
    struct lista usuarios[500];
    int inicio,numeroUsuarios=0,opcion;
    int numeracion=0, i=0, j=0, a, b, n=0;
    FILE * fichero;
    
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
