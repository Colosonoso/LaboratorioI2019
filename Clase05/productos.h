#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED


typedef struct
{

char codigodebarras[13];
float precio;
char nombre[50];
char fechadevencimiento[50];
char proveedor[50];
int estado;
}eProducto;

//intpedirproductos(int product)
















#endif // PRODUCTO_H_INCLUDED
eProducto Pedirelproducto();
void mostrarelproducto(eProducto);
void cargararray(int, eProducto[]);
void mostrararray(int,eProducto[]);
void construirarray(int ,eProducto[]);
int insertProducto(eProducto,eProducto[]);
int damelugarlibre(eProducto[]);
