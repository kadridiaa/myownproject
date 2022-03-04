#include<stdio.h>
   main ()
     {
         int a,n,i,s;
         do {
            printf ("donner le nomber n :\n");
            scanf ("%d",&n);
         }
         while (n<0);
          i=1;
          s=n;
            while (i<n){
                a=s*i;
                s=a;
                i=i+1;
            }

            printf ("%d factorielle est : %d",n,s);


     }
