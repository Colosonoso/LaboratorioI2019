#include <stdio.h>
#include <stdlib.h>


typedef struct
{
  char nombre[50];
  char apellido[40];
  int edad;
  int nota;


}eAlumno;


int main()
{

    eAlumno Unalumno;
    printf("Pedro","Gomez",45,7);

    printf("%s",Unalumno.apellido);



    printf("Hello world!\n");
    return 0;
}
