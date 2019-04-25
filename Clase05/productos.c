#include <stdio.h>
#include <string.h>
#include "productos.h"

int insertProducto(eProducto,eProducto[]);
int damelugarlibre(eProducto[]);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);
int editarproducto(eProducto,eProducto[]);

int borrarProducto(eProducto elProducto,eProducto listado[])
{
    int indice;


    indice=existeProducto(elProducto,listado);

    if(indice!=-1)
    {

        listado[indice].estado=-1;


    }
    return indice;
}

void construirarray(int tam, eProducto listado[] )
{

    int i;


   for(i=0; i<tam; i++)
   {

    listado[i].estado=0;
    strcpy(listado[i].nombre="as");
    strcpy(listado[i]=codigodebarras="");
    strcpy(listado[i].fechadevencimiento="");
    listado[i].precio=0;

   }


}

void mostrararray(int tam, eProducto listado[])
{
    int i;

    for(i=0; i<tam; i++)
   {

    mostrarelproducto(listado[i]);
   }
}
void cargararray(int tam, eProducto listado[] )
{

    int i;


   for(i=0; i<tam; i++)
   {

    listado[i]=Pedirelproducto();
   }
}

eProducto Pedirelproducto()
{


    eProducto productoretorno;


    printf("Ingrese un codigo de barra");
    fflush(stdin);
    gets(productoretorno.codigodebarras);



    printf("Ingrese un precio");
    scanf("%f",&productoretorno.precio);

    printf("Ingrese un nombre ");
    fflush(stdin);
    gets(productoretorno.nombre);

    printf("Ingrese una fecha de vencimiento");
    fflush(stdin);
    gets(productoretorno.fechadevencimiento);

    printf("Ingrese un proveedor por favor");
    fflush(stdin);
    gets(productoretorno.proveedor);




    return productoretorno;
}
void mostrarelproducto(eProducto parametroparaelproducto)
{

    printf("\n\n\n  \t\t<<<<<<<`Producto >>>>>>> \n");
    printf("\nAtributo \t Valor");
    printf("\n--------------------------------------------");
    printf("\nCodigo :\t %s",parametroparaelproducto.codigodebarras);
    printf("\nNombre :\t %s",parametroparaelproducto.nombre);
    printf("\nProveedor :\t %s",parametroparaelproducto.proveedor);
    printf("\nFecha vencimiento :\t %s \n\n",parametroparaelproducto.fechadevencimiento);
    printf("\nEstado :\t %d",parametroparaelproducto.estado);



}



void construirarray(int tamanio,eProducto)

{

    listado[i].estado=0;

}

