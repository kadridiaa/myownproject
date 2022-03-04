#include<stdio.h>
  main ()
    {
        int x,a,b,y;

        printf ("__________start__________\n");

        do {
            printf ("enter the numbers a and b :\n");
            scanf ("%d%d",&a,&b);
        }
        while (a<0 && b<0);
         if (a<b){
            y=a;
            a=b;
            b=y;
         }

        while (a-b!=0)
            {
                x=a-b;
                if (x<b){
                    a=b;
                    b=x;
                }
                else {
                    a=x;
                    b=b;
                }

        }
        printf ("the PGCD is : %d",a);
    }
