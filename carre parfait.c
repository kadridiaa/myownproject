#include<stdio.h>
#include<stdlib.h>

    int parfait (int x){
         int s=0,t,i;
   if (x==1) t=1;
   else {
       for (i=1;i<=x/2;i++){
        if (x%i==0) s=s+i;
       }
  if (s==x) t=1;
    else t=0;
  return t ;}
  }
  int main(){
 int i,p;
      printf ("les nombres parfaits superieur a 200 :\n");
      for (i=1;i<=200;i++){
        p=parfait(i);
        if (p==1)
        printf("%d\n",i);
      }
      return 0;




  }
