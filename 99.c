#include<stdio.h>
   main ()
     {
         int n,n1,n2,i,n3;
         printf ("enter the number n :\n");
         scanf ("%d",&n);
         n1=0;
         n2=9;
         for (i=2;i<=n;i++){
            n3=n2+((n2-n1)*10+9);
            printf ("%d +",n3);
            n1=n2;
            n2=n3;
         }
     }
