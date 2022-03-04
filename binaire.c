#include<stdio.h>
#include<math.h>
   main()
     {
        int x,s,i,n;
        double y;
         printf ("enter the number on binair n :\n");
         scanf ("%d",&n);
          i=0;
          s=0;
          while (n>0){
            x=n%10;

            y=x*pow(2,i);

            i=i+1;

            s=s+y;

            n=n/10;

          }
          printf ("the number on decimal is : %d",s);
     }
