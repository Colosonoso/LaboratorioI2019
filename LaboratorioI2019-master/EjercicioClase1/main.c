#include <stdio.h>
#include <stdlib.h>

void saludar(void);
int dameNumero(void);
float sacarPromedio(int,int);
void esPrimo(int numero);


int main()
{
    int edad;
    float altura;
    int contador;
    int numero;
    int suma;
    float promedio;
    int limite;
    altura=82.5;
    edad=0;
    saludar();

    printf("Ingrese su edad:");
    scanf("%d",&edad);
    printf("Ingrese su altura: ");
    scanf("%f",&altura);
    printf("Ezequiel \t Reyes \n");
    printf("su edad es: %d \t ",edad);
    printf("su altura es: %f\n",altura);

    suma=0;
    contador=0;
    limite=dameNumero();

    while(contador<limite)
    {
        printf("Ingrese un numero:");
        scanf("%d",&numero);
        suma=suma+numero;
        contador ++;
    }

    //promedio=(float)suma/contador;
    promedio=sacarPromedio(suma,contador);
    printf("El promedio es: %f\n",promedio);

    return 0;
}
void saludar(void)
{
    printf("Hola mundo C");
}

int dameNumero(void)
{
    int cantidad;
    printf("Ingrese la cantidad de iteraciones: %d",cantidad);
    scanf("%d",&cantidad);
    return cantidad;
}
float sacarPromedio(int suma,int cantidad)
{
    float retorno;

    retorno=(float)suma/cantidad;
    return retorno;

}
void esPrimo(int numero);
{

}
