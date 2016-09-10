#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"
#include "funciones.h"

 int greeting();
 int menu();
 float sum(float a,float b);
 float subtraction(float a, float b);
 float division(float a, float b);
 float multiplication(float a, float b);
 int factorial(int a);

 int main()
{


  float ope1=0;
  float ope2=0;
  int option,flag1=-1,flag2=-1;
  int follow='N';
  int auxil;
  float aux;



  do
  {

            aux=greeting();

        option=menu();

         switch(option)
         {

             case 1:
                 flag1=-1;
                printf("Enter 1er operand: ");
                scanf("%2f",&ope1);
                if(flag1>=0);
                 {
                     flag1=ope1;
                 }
                  if(flag1<=0)
                  {
                     printf("You must enter an operand:\n\n");
                  }
                break;


             case 2:
                 flag2=-1;
                printf("Enter 2do operand:");
                scanf("%2f",&ope2);
                if(flag2>=0);
                 {
                     flag2=ope2;

                 }
                  if(flag2<=0)
                  {
                     printf("You must enter an operand:\n\n");
                  }
                break;

             case 3:
                aux=sum(ope1,ope2);
                printf("The result of the sum is:%.2f\n",aux);
                break;

             case 4:
                 aux= subtraction(ope1,ope2);
                 printf("The result of the subtraction is:%.2f\n",aux);
                 break;

             case 5:
                 aux= division(ope1,ope2);
                 printf("The result of the division is:%.2f\n",aux);
                 break;

             case 6:
                 aux= multiplication(ope1,ope2);
                 printf("The result of the multiplication is:%.2f\n",aux);
                 break;

             case 7:

                 auxil= factorial(ope1);
                 printf("The factorial is:%d\n\n",auxil);
                 break;

             case 8:
                 aux=sum(ope1,ope2);
                 printf("The result of the sum is:%.2f\n",aux);

                 aux= subtraction(ope1,ope2);
                 printf("The result of the subtraction is:%.2f\n",aux);

                 aux= division(ope1,ope2);
                 printf("The result of the division is:%.2f\n",aux);

                 aux= multiplication(ope1,ope2);
                 printf("The result of the multiplicacion is:%.2f\n",aux);

                 auxil= factorial(ope1);
                 printf("The factorial is:%d\n\n",auxil);

                 break;

             case 9:

                follow= 'N';

                break;
        }
  }
       while(follow!=9);

       return 0;
}



