#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarVector(int datos[],int tamanio);
void mostrarPalabras(char datos [] [10], int tamanio);
void cargarvector(int datos[], int tamanio);
void ordenarVector(int datos[], int tamanio);

int main()
{
    char usuario[] [10]= {"Roberto","Emilia","Jesus","Eze","Anto"};
    int nota[10]= {8,5,2,10,3};
    int i;
    int j;
     mostrarPalabras(usuario,5);
    mostrarVector(nota,5);
    cargarvector(nota,5);
    mostrarVector(nota,5);

    /*inicializacion de arrays en paralelo

    for(i=0; i<5; i++)
    {

        //usuario[i][0]="";
    strcpy(usuario[i],"");
    //nota[i]=0;

    }*/


    /*carga secuencial de arrays en paralelo

    for(i=0; i<5; i++)
    {

        printf("Ingrese un usuario  %d :",i+1);
        scanf("%s",usuario[i]);*/

    /*printf("Ingrese una nota %d",i+1);
    scanf("%s",&nota[i]);



    }
    */
// strcpy(usuario[0],"hola");
    /*printf("test %s \n", usuario[0]);
     printf("test %s \n", usuario[1]);
    */

    /* for(i=0;i<5;i++)
    {

       printf("alumno :%s nota: %d \n", usuario[i],nota[i]);

    }

    */
    for(i=0; i<5; i++)
    {

        printf("alumno :%s nota: %d \n", usuario[i],nota[i]);

    }



    for(i=0; i<5; i++)
    {



        for(j=0; j<4; j++)

        {
            printf("%d => %d \n",nota[i],nota[j]);


            int resultado;
            resultado=strcmp("hola","hola");
            printf("iguales : %d \n",resultado);
            resultado=strcmp("Hola","hola ");

            printf("primera : %d \n",resultado);
            resultado=strcmp("hola","Hola");

            printf("segunda : %d \n",resultado);
            resultado=strcmp("A","a");

            printf("la A: %d \n",resultado);
            resultado=strcmp("a","b");

            printf("la a-b: %d \n",resultado);
            resultado=strcmp("b","a");

            printf("la b-a: %d \n",resultado);
            resultado=strcmp("a","b");


            if(strcmp(usuario[i],usuario[j])==-1)
            {

                int aux=nota[i];
                nota[i]=nota[j];
                nota[j]=aux;


                char AuxString[10];
                strcpy(AuxString,usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j],AuxString);

            }
        }
    }

    //ordenamiento por nota
    /*for(i=0;i<5;i++)
    {



       for(j=0;j<4;j++)

       {
         printf("%d => %d \n",nota[i],nota[j]);


          if(nota[i]<nota[j])
         {

          int aux=nota[i];
          nota[i]=nota[j];
          nota[j]=aux;


           char AuxString[10];
           strcpy(AuxString,usuario[i]);
           strcpy(usuario[i],usuario[j]);
           strcpy(usuario[j],AuxString);

         }



       }

    }
    */
    /*printf("Ingrese usuario ");
    scanf("%s",usuario[0]);
    printf("Ingrese usuario ");
    scanf("%s",usuario[1]);
    int tamano=strlen(usuario[8]);

    printf("tamanio :%d" \n, tamano)



    printf("Hello %s  \n",usuario[0]);
    printf("Hello %s  \n",usuario[1]);
    printf("Hello %s  \n",usuario[2]);
    */
    return 0;
}
void mostrarVector(int datos[],int tamanio)
{
    int i;

    for(i=0;i<tamanio;i++)
    {
        printf("nota: %d \n",datos[i]);
    }

}
void cargarvector(int datos[], int tamanio)
{
    int i;

    for(i=0; i<tamanio;i++)
    {

    datos[i]=-1;


    }


}
void mostrarPalabras(char datos [] [10], int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)

    {
        printf("nombre : %s", datos);
    }
}
