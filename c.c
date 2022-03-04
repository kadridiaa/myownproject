#include<stdio.h>

#include <stdlib.h>

int parfait(int n)
{
    int i,m,y=0,s=1;
   if(n==1)
    y=1;
       else {
              m=n/2;
              for(i=2;i<=m;i++)
              {
               if(n%i==0)
               s=s+i;
              }
               if(n==s)
               y=1;
      else y=0;
               }
   return y;
}
int main()
{
    int x,i;
    printf("les nobres parfait inferieur a 200 sont:\n");
 for(i=0;i<=200;i++)
 {

 x=parfait(i);
 if(x==1)
 printf("le nombre  %d est parfait \n",i);
   }

    return 0;

}
