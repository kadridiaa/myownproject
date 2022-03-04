#include<stdio.h>
   main ()
     {
         int x,y,i;
         for (i=1;i<=9;i++){

            while (x>0 && x<=9){
                printf ("%d * %d = %d\n",x,i,y);
                y=x*i;
                x=x+1;

            }

         }

     }
