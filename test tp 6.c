#include<stdio.h>
   main ()
    {
        int x,i,n,p,c,r;
        do {
            printf("enter the number n :\n");
            scanf ("%d",&n);
        }
        while (n<=0);
        p=0;c=0;
        for (i=1;i<=n;i++){
            do {
                printf("enter the %d number :\n",i);
                scanf("%d",&x);
            }
            while (x<=9);
         if (x<100)
            { if (x/10==1){
                      c=c+1;
          }
        else {
            p=p+1;
        }
        }
        else {
            r=x/10;
            if (r%10==1){
                      c=c+1;
          }
        else {
            p=p+1;

        }

        }

        }
         printf("le nomber des elements qui ont le numero de dizaine 1 est :%d\n",c);
          printf("le nomber des elements qui ont le numero de dizaine superieur a 1 est :%d\n",p);
    }
