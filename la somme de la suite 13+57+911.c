#include<stdio.h>
  main()
    {
        int x,y,n,s,p,i;
        do {
            printf ("enter the number n :\n");
            scanf ("%d",&n);
        }
        while (n<1 || n>100);

        p=13;
        s=13;
        for (i=3;i<=n;i++){
            x=((s/10)+4)*10;
            y=x+((s%10)+4);
              if (s/10>10 || s%10>10){
                x=x*10;
                y=x+(s%10)+4;
              }
              if (s/10>10 && s%10>10) {
                x=x*100;
                y=x+(s%10)+4;
              }
              p=p+y;
        }
        printf ("the total is :%d",p);
    }
