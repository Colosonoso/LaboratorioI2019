#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5


//void getString(char mensaje[], char input[]);
//void getStringLetras(char mensaje[], char input[]);
//void getStringNumeros(char mensaje[],);

void mostrarAlumnos(char[][50], char[][50], int[],int[],int);
void OrdenarAlumnos(char[][50], char[][50], int[],int[],int);


int main()
{

    char nombres [TAM] [50]={"Roberto","Marcelo","Agustina","Lucas","Loreano"};
    char apellidos [TAM][50]={"Agwonski","Tute","Clansford","Di Yorio","MackDensel"};
    int edades[TAM]={15,20,19,18,17};
    char mail[][30];
    int notas[TAM]={9,7,8,6,9};

    int i;
    int j;




    OrdenarAlumnos(nombres,apellidos,edades,notas,TAM);
    mostrarAlumnos(nombres,apellidos,edades,notas,TAM);

    printf("%10s\t%10s\t%s\t%s\n","Nombre","Apellido","Edad","Nota");

    for(i=0; i<TAM; i++)
    {
        printf("%10s\t%10s\t%d\t%d\n",nombres[i],apellidos[i],edades[i],notas[i]);
    }
}

void mostrarAlumnos(char nombre[][50], char apellido[][50], int edad[],int nota[],int tam)
{

int i;

printf("%10s\t%10s\t%s\t%s\n","Nombre","Apellido","Edad","Nota");

    for(i=0; i<TAM; i++)
    {
        printf("%10s\t%10s\t%d\t%d\n",nombre[i],apellido[i],edad[i],nota[i]);
    }
}
void OrdenarAlumnos(char nombre[][50], char apellido[][50], int edad[],int nota[],int tam)
{
char auxCadena[50];
int auxEntero;
int i;
int j;

     for(i=0; i<tam; i++)
     {


        for(j=i+1; j<tam; j++)
        {


           if(strcmp(nombre[i],nombre[j])>0)
           {

               strcpy(auxCadena,nombre[i]);
               strcpy(nombre[i],nombre[j]);
               strcpy(nombre[j],auxCadena);


               strcpy(auxCadena,apellido[i]);
               strcpy(apellido[i],apellido[j]);
               strcpy(apellido[j],auxCadena);

               auxEntero=edad[i];
               edad[i]=edad[j];
               edad[j]=auxEntero;

               auxEntero=nota[i];
               nota[i]=nota[j];
               nota[j]=auxEntero;


           }


        }


    }


}



