#include<stdio.h>
  main()
    {  printf ("_______start_______\n");
        int a,b,x,y;

             printf ("enter the numbers a and b :\n");
             scanf ("%d%d",&a,&b);

         while (a%b>0){

            y=a%b;
            a=b;
            b=y;
         }
         printf ("the PGCD is :%d",b);

    }
