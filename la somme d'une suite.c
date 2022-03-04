#include<stdio.h>
   main()
     {
         int x,n,i;
         float r,p,s;

         do {
         printf ("enter the number n :\n");
         scanf ("%d",&n);
         }
         while (n<0);

         printf ("enter the number x :\n");
         scanf ("%d",&x);


         r=(float)(-1/x);
         p=-1;
         s=-1;
         for (i=1;i<=n;i++)
         {

             p=p*r;
             s=s+p;
         }
         printf ("the total is %f",s);
     }
