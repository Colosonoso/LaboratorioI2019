#include <stdio.h>
#include <stdlib.h>
#include "productos.h"
#include <string.h>
#define TAM 5

int main()
{

   eProducto Unproducto;

   //Unproducto=Pedirelproducto();

/*void mostrarelproducto(eProducto);
 //void  cargararray(int,Unproducto[]);
*/
  eProducto listadodeproductos[3];

  construirarray(3,listadodeproductos);


  mostrararray(3,listadodeproductos[]);

    return 0;
}
