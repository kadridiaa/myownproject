#include<stdio.h>
   float surface (int a,int b)
     {
      float s;
      s=a*b;
      return (s);
     }
     main ()
     {
      float d,c,s;
       printf ("enter the length and the width :\n");
       scanf  ("%f%f",&d,&c);
       s=surface(d,c);
       printf("the surface is : %f",s);
     }
