#include<stdio.h>
   main ()
     {
         int x,y,i;
         for (i=1;i<=9;i++){

            while (x>0 && x<=9){
                y=x*i;
                printf ("y=%d\n",y);
                x=x+1;
            printf ("%d * %d = %d\n",x,i,y);
            }

         }

     }
