#include<stdio.h>
  main ()
    {
        int x,y,s,n,i;
        do {
            printf ("enter the number n :\n");
            scanf ("%d",&n);
        }
        while (n<=2);
        x=1;
        y=1;
        s=0;
        for (i=3;i<=n;i++)
        {
            s=x+y;
            y=x;
            x=s;

        }
        printf ("la suite est : %d",s);
    }

