#include<stdio.h>
  main()
  {
      int y,f,r,N,n,i,p,s,j,x,o;
      do{
        printf("donner le nomber N :\n");
        scanf("%d",&N);
      }
      while (N>30);
       s=721;
       for (i=1;i<=N-2;i++){
        x=3+4*i;

        r=x;  f=x;

        for (j=1;j<=f-1;j++){
            x=r*j;
            r=x;
        }  printf("x=%d\n",x);

        p=x; o=p;
        printf("p=%d\n",p);

        for (j=1;n<=x-1;j++){
            p=o*j;

            o=p;

        }printf("p=%d\n",p);
        s=s+p;
       }

     printf ("la somme est : %d",s);
  }

