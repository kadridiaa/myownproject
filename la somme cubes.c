#include<stdio.h>
   main()
     {
        int y,s,n;
        double x;
        do {
            printf ("enter the number n :\n");
            scanf ("%d",&n);
        }
        while (n<50);
           y=0;
        while (n!=0){
            x=pow((n%10),3);
            y=y+x;
            n=n/10;
        }
        printf ("the total is : %d",y);
     }
