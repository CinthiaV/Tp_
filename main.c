#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"

#define Cant_Personas 20

int menu(void);

typedef struct
{

    char nombre[50];
    int dni;
    int edad;
    int status;

}ePersonas;

int main()
{
    ePersona ArrayPersona[Cant_Personas];
    int dni;
    int option=0;
    int lugarLibre;
    int resultadoDeBusqueda;

    inicializarArrayPersona (ArrayPersona,Cant_Personas);

    do
    {
        option=menu();

        switch(option)
        {

        case 1:
            lugarLibre=obtenerEspacioLibre(ArrayPersona,Cant_Personas);
            if(lugarLibre==-1)
            {
                printf("\nNO QUEDAN LUGARES LIBRES\n");

            }
            else
            {

                printf("\nINGRESE EL NOMBRE:\n");
                fflush(stdin);
                scanf("%s",&ArrayPersona[lugarLibre].nombre);
                ArrayPersona[lugarLibre].status=0;

                printf("\nINGRESE LA EDAD:\n");
                scanf("%d",&ArrayPersona[lugarLibre].edad);

                printf("\nINGRESE EL DNI:\n");
                scanf("%d",&ArrayPersona[lugarLibre].dni);

            }
            break;
        case 2:

            printf("\nINGRESE EL DNI A BORRAR:\n");
            scanf("%d",&dni);

            resultadoDeBusqueda=buscarPorDni(ArrayPersona,dni);

            if(resultadoDeBusqueda==-1)
            {
                printf("\nEL DNI NO PUDO ENCONTRARSE\n");
                break;
            }
            printf("\nINGRESE EL NUEVO DNI:\n");

        case 3:

            mostrarOrdenado(ArrayPersona, Cant_Personas);
            system("pause");
            break;

        case 4:

            mostrarGrafico(ArrayPersona,Cant_Personas);
            system("pause");
            break;

        case 5:
            printf("\nSALIR DEL PROGRAMA\n");

        default:

        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;

            printf("\nOPCION INCORRECTA\n");
            system("pause");
            break;
        }

    }while(option!='S');

    return 0;
}
