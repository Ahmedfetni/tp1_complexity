#include <stdio.h>
#include <stdlib.h>
#include "temps_exec.h"

int main()
{     //jsut to test 





   //mesurer_le_temps_algo1();

  //mesurer_le_temps_algo2();
   
   //mesurer_le_temps_algo3();
   
   //mesurer_le_temps_algo4();
   
   //mesurer_le_temps_algo5();
   
   //mesurer_le_temps_algo6();

   double** vect = question_1();
   for (int i = 0; i < 6; i++)
   {
      for (int j = 0; j <6; j++)
         printf("%f  ",vect[i][j]);
   }
   
   printf("---------------");
   /**************************** Question 3 **************************/
   double ** moys =  moy_temps_d_exec();
   printf("nombres algo1\talgo2\talgo3\talgo4\talgo5\talgo\t\n");
   for (int i = 0; i < 6; i++)
   {
      
      for (int j = 0; j< 6; j++)
      {  
         if (moys[i][j] != -1 )
            printf("%.00fms \t",moys[i][j]*1000);
         else
         printf(" <10min\t");
      }
      printf("\n");
   }
   
}