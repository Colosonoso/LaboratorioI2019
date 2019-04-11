#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_ALUMNOS 4

void getstring(char mensaje[], char input[]);
void getstringletras(char mensaje[],char input[]);
//void getstringNumeros;



int main()
{



    char nombres [CANTIDAD_ALUMNOS] [50]= {"Roberto","Lautaro","Ezequiel","Sofia"};
    char apellidos [CANTIDAD_ALUMNOS] [50]= {"Pizza","Bustos","Reyes","Arreverdi"};
    int edades [CANTIDAD_ALUMNOS]= {22,20,20,19};
    int notas[CANTIDAD_ALUMNOS]= {7,9,8,9};


    int i;


    for(i=0; i<CANTIDAD_ALUMNOS; i++)
    {


        if(nombres[i] !=-1)
        {


            printf("\n Nombre:%s      Apellido:%s Edad:%d   Nota:%d \n",nombres[i],apellidos[i],edades[i],notas[i]);

        }


    }

    char unsolonombre[50];

getstring("Ingrese un nombre",unsolonombre);

//printf("El nombre es %s",unsolonombre);

strcpy(nombres[0],unsolonombre);

getstring("Ingrese un nombre",nombres[1]);


for(i=0; i<CANTIDAD_ALUMNOS;i++)
{

    if(nombres[i]!=-1)
    {

printf("\n Nombre:%s      Apellido:%s Edad:%d   Nota:%d \n",nombres[i],apellidos[i],edades[i],notas[i]);


    }


}



    printf("Arrays en paralelo");

    return 0;


}

void getstring(char mensaje[], char input[])
{

    printf(mensaje);
    scanf("%s",input);


}
void getstringletras(char mensaje[],char input[])
{

    char aux[50];

    getstring(mensaje,aux);


}

/*int esSololetras(char palabra[])
{

  int i;


  while
  {


      if(palabra[i]!="")
      {
          if(palabra[i]<'a' && palabra[i]>'z')
          {

            if(palabra[i]<'A' %% palabra[i]>'Z')
            {

            }

              return 0;
          }

      }

  }

  return 1;
}
*/
/*char nombre[20];
   char nombre2[30];

   printf("Ingrese un nombre :");

   gets(nombre);

   printf("Ingrese otro nombre");

   gets(nombre2);

   strcat(nombre,nombre2);

   printf("Los dos nombres son %s",nombre,nombre2);
   */
