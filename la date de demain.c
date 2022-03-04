#include<stdio.h>
   main ()
     {
         int x,y,z;

            printf ("donner la date d'aujourd'hui :\n");
            scanf ("%d%d%d",&x,&y,&z);


         switch (y)
         {
         case 1,3,5,7,8,9,11:
            if (x=31){
                x=1;
                y=y+1;
                z=z;
            }
            else{
                x=x+1;
                y=y;
                z=z;
            }break;
         case 4,6,10:
            if (x=30){
                x=1;
                y=y+1;
                z=z;
            }
            else {
                x=x+1;
                y=y;
                z=z;
            }break;
         case 2:
            if(x=29){
                x=1;
                y=y+1;
                z=z;
            }
            else {
                x=x+1;
                y=y;
                z=z;
            }break;
         case 12:
            if(x=30){
                x=1;
                y=1;
                z=z+1;
            }
            else {
                x=x+1;
                y=y;
                z=z;
                break;
            }
         }
         printf ("la date de demain est : %d%d%d",x,y,z);


     }
