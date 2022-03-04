#include<stdio.h>
main()
{
int n,i;
float u,u0,u1;
    do{
printf(" Veuillez entrer la valeur de n :\n ");
scanf("%d",&n);
    }
    while ((n>100)||(n<0));
    u0=2;u1=3;
    for(i=3;i<=n;i++)
{
    u=((0.666666)*u1)-((0.25)*u0);
    printf("u=%f\n",u);
    u0=u1;
    printf("u0=%f\n",u0);
    u1=u;
   printf("u1=%f\n",u1);
    }
    printf("La valeur du %d eme terme est:%f",n,u);
}
