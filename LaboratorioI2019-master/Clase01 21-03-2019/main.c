#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que realice las siguientes acciones
1. Limpie la pantalla
2. Asigne 2variables numero1 y numero2 valores distintos
3. Efectuar el producto de dichas variables
4. Muestre el resultado por pantalla
Obtenga el cuadrado de numero1 y lo muestre por pantalla*/



int main()
{


    int edad;
    float altura;
    int contador;
    int numero;
    int suma;
    float promedio;

    printf("Ingrese su edad: ");
    scanf("%d",&edad);
    printf("Ingrese su altura: ");
    scanf("%f",&altura);
    printf("Ezequiel \t Reyes \n");
    printf("su edad es: %d y su altura es %f \n",edad,altura);


    suma=0;
    contador=0;

    while(contador<5)
    {
        printf("Ingrese un numero:");
        scanf("%d",&numero);

        suma=suma+numero;
        contador ++;

    }

    promedio=(float)suma/contador;
    printf("El promedio es: %f\n",promedio);

    return 0;
}
