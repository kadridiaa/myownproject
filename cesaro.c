#include<stdio.h>
   main ()
     {
         int p,u2=1,u1=1,u,i,n,s;
         printf ("donner N :\n");
         scanf ("%d",&n);
     s=2;
     for(i=3;i<=n;i++){
        u=u2+u1;
        printf("u=%d\n",u);
        u1=u2;

        u2=u;

        s=s+u;
        printf("s=%d\n",s);
     }
     p=s/n;
     printf("vn est :%d",s);



     }
