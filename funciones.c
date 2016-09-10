
#include "funciones.h"


int greeting()
{

    printf("\nBIENVENIDO\n\n");

return 0;
}
/** \brief un menu
 *
 * \param contiene la lista de opciones
 * \return las opciones del menu
 *
 */


int menu()
{

     int option=-1;


        printf("1- Ingresar 1er operando:\n");
        printf("2- Ingresar 2do operando:\n");
        printf("3- Calcular la suma (a+b)\n");
        printf("4- Calcular la resta (a-b)\n");
        printf("5- Calcular la division (a/b)\n");
        printf("6- Calcular la multiplicacion (a*b)\n");
        printf("7- Calcular el factorial (a!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        fflush(stdin);
        scanf("%d",&option);
 return option ;
}

/** \brief toma dos valores para sumarlos
 *
 * \param se ingresa un primer valor
 * \param se ingresa un segundo valor para ser evaluado
 * \return el resultado de la suma
 *
 */

float sum (float a, float b)
{
    float sum;
    sum=a+b;

  return sum;
}


/** \brief toma dos valores para restarlo
 *
 * \param se ingresa un primer valor
 * \param se ingresa un segundo valor para ser evaluado
 * \return el resultado de la resta
 *
 */

float subtraction (float a, float b)
{
     float subtraction;
        subtraction= a-b;

     return subtraction;
}


/** \brief toma dos valores para dividirlos
 *
 * \param se ingresa un primer valor
 * \param se ingresa un segundo valor para ser evaluado
 * \param if compara que el valor ingresado sea diferente a 0 para poder realizar la division,
         si es igual a 0 avisa al usuario un error
 * \return el resultado de la division
 *
 */
 float division (float a, float b)
{
    float division;

    division=(float)a/b;
    if (a!=0)
    {

        division=a/b;
    }
    else
    {
        printf("La division por 0 no esta definida\n");
    }
    return division;
}

/** \brief toma dos valores para multiplicar
 *
 * \param se ingresa un primer valor
 * \param se ingresa un segundo valor para ser evaluado
 * \return el resultado de la multiplicacion
 *
 */

 float multiplication(float a, float b)
{
     float multip;
     multip= a*b;

     return multip;
}

/** \brief toma un  valor ingresado por el ussuario
 *
 * \param el if compara que el valor ingresado sea igual a 1
 * \param se ingresa un segundo valor para ser evaluado
 * \return el resultado de la resta
 *
 */

int factorial(int a)
{
  int fact;
       if(a==1)
       {
        return 1;
       }
       else
       {
        fact=a* factorial(a-1);
       }
        if(a<0)
        {
          printf("El factorial de numeros negativos no esta definido\n");
        }
      return fact;
}
