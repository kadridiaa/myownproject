#include<stdio.h>
  main ()
   {
       int x,y,i;
       for (i=1;i<=9;i++){
       x=1;
        while (x>=0 && x<=9){
            y=i*x;
             printf ("%d * %d = %d\n",i,x,y);
            x=x+1;
        }
       }
   }
