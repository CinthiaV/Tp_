#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"



/**brief es el menu a mostrar.
 * param opcion -1 es para que el usuario ingrese los 5 opciones dadas.
 * return opcion.
 */

int menu(void)
{

    int option=-1;
    system("cls");
    printf("\n1- AGREGAR PERSONA:\n");
    printf("2- BORRAR PERSONA:\n");
    printf("3- IMPRIMIR LISTA ORDENADA POR  NOMBRE:\n");
    printf("4- IMPRIMIR GRAFICO DE EDADES\n");
    printf("5- SALIR\n\n");

    fflush(stdin);
    scanf("%d",&option);

    return option;
}


/**brief Inicializa un array de enteros con el valor recibido.
 * param personaArray es el array a ser inicializado.
 * param cant indica la longitud del array.
 * return -
 */
void inicializarArrayPersona(ePersona ArrayPersona[], int Cant_Personas)
{
    int i;
    for(i=0; i<Cant_Personas; i++)
    {
        ArrayPersona[i].status= -1;
    }

}

/**
 * Obtiene el primer indice libre del array.
 * param lista el array se pasa como parametro.
 * return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona lista[],int Cant_Persona)
{
    int i=0;
    int retorno=0;
    for(i=0; i<Cant_Persona; i++)
    {
        if(lista[i].status==-1)
        {
            retorno= i;
            break;
        }
    }
    return retorno;
}


/**brief Obtiene el indice que coincide con el dni pasado por parametro.
 * param lista el array se pasa como parametro.
 * param dni el dni a ser buscado en el array.
 * return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */

void mostrarOrdenado(ePersona ArrayPersona[],int Cant_Personas)
{
    ePersona aux;
    int i,j;
    for(i=0;i<Cant_Personas-1;i++)
                 {
                     for(j=i+1;j<Cant_Personas;j++)
                     {
                         if(strcmp(ArrayPersona[i].nombre,ArrayPersona[j].nombre)>0)
                            {
                                aux=ArrayPersona[i];
                                ArrayPersona[i]=ArrayPersona[j];
                                ArrayPersona[j]=aux;


                                aux=ArrayPersona[i];
                                ArrayPersona[i]=ArrayPersona[j];
                                ArrayPersona[j]=aux;

                                aux=ArrayPersona[i];
                                ArrayPersona[i]=ArrayPersona[j];
                                ArrayPersona[j]=aux;

                            }
                     }
                 }

                for(i=0; i<Cant_Personas; i++)
                {
                    if(ArrayPersona[i].status==0)
                    {
                        printf("%s- %d- %d\n",ArrayPersona[i].nombre,ArrayPersona[i].edad,ArrayPersona[i].dni);
                    }
                }
                system("pause");
}


/**brief Obtiene el indice que coincide con el dni pasado por parametro.
 * param lista el array se pasa como parametro.
 * param dni el dni a ser buscado en el array.
 * return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */

int buscarPorDni(ePersona lista[], int dni)
{
    int i;
    int cant=20,retorno=-1;

    for(i=0; i<cant; i++)
    {
        if(lista[i].dni==dni)
        {
            lista[i].status=-1;
            retorno=i;
            break;
        }
    }
    return retorno;
}

void mostrarGrafico(ePersona ArrayPersona[],int Cant_Personas)
{
     int i, Menores=0, Adultos=0, Adolescentes=0,mayor;
    for(i=0;i<Cant_Personas;i++)
    {
        if(ArrayPersona[i].status==0)
        {
            if(ArrayPersona[i].edad<=18)
            {
                Menores++;
            }
            else if(ArrayPersona[i].edad>18&&ArrayPersona[i].edad<=35)
            {
                Adolescentes++;
            }
            else if(ArrayPersona[i].edad>35)
            {
                Adultos++;
            }
        }
    }
    if(Menores>Adolescentes&&Menores>Adultos)
    {
        mayor=Menores;
    }
    else if(Adolescentes>Menores&&Adolescentes>Adultos)
    {
        mayor=Adolescentes;
    }
    else if(Adultos>Menores&&Adultos>Adolescentes)
    {
        mayor=Adultos;
    }
    for(i=mayor;i>=0;i--)
    {
        if(i<Menores)
        {
            printf(" *\t");
        }
        else
        {
            printf("  \t");
        }
        if(i<Adolescentes)
        {
            printf("  *\t");
        }
        else
        {
            printf("   \t");
        }
        if(i<Adultos)
        {
            printf("   *\n");
        }
        else
        {
            printf("    \n");
        }
    }
    printf("\n<18\t19-35\t>35\n");
    Adultos=0;
    Menores=0;
    Adolescentes=0;
}






