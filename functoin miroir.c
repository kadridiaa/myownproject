#include<stdio.h>
#include<stdlib.h>

  int miroir(int x){
     int s=0;
     while (x!=0){
        s=(s*10)+(x%10);
            x=x/10;
     }
  return s ;
  }
  int main(){
    int d,p;
    printf ("entrer le nombre d :\n");
    scanf("%d",&d);
    p=miroir(d);
    printf ("le nombre est :%d\n",p);
  return 0;
  }
