#include<stdio.h>

   main ()
     {
         int a,n,i,s,j,b,r;
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

            printf ("%d factorielle est : %d\n",n,s);
           b=s; j=1;
           while (j<b){
                r=b*j;
                b=r;
                j=j+1;

     }
        printf ("%d factorielle est : %d",b,r);

}
