#include<stdio.h>
  main ()
   {
        int i,x,n,c;
        printf ("donner le nombre n :\n");
        scanf ("%d",&n);
        c=0;
        for (i=1;i<=n;i++){
            x=n%i;
            if (x=0){
                c=c+1;
            }
        }
        if (c>2){
            printf ("le nombre %d est premier ",n);
        }
   }


