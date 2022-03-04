#include<stdio.h>
   main()
     {
         int i,n,x,y,s;
         printf ("enter un nombre N :\n");
         scanf ("%d",&n);
         x=n/2;
         s=0;
         for (i=1;i<=x;i++){
            y=n%i;
             if (y=0){
              s=s+i;
             }
         }
     if (s=n){
       printf ("%d est un nombre parfait",n);
     }
     else {
        printf ("%d n'est pas un nombre parfait",n);
     }


     }
