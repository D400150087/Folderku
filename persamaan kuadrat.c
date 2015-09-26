#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
     int a,b,c,d,x;
     double x1,x2;
 
     printf("Masukan nilai a : ",a);     
     scanf("%d",&a);     
     printf("Masukan nilai b : ",b);     
     scanf("%d",&b);     
     printf("Masukan nilai c : ",c);     
     scanf("%d",&c);     
     printf("\n");

     d=(b*b) - (4*a*c);
     printf ("determinan = %f\n",d);
     
     if(a==0)

     printf("Bukan persamaan kuadrat=> masukkan nilai kembali \n");


     else

     {

     printf("Nilai b: ");

     scanf("%f", &b);

     printf("Nilai c: ");

     scanf("%f", &c);
     
     if (d=0);{
               x=-b/2*a;
          
     printf ("Jika d=0 hanya satu rumus x=-b/2*a x=%f \n",x1=x2);}

     if (d>0); {x1 = (-b+sqrt(d))/2*a;
                x2 =(-b-sqrt(d))/2*a;
     printf ("x1=%f \n",x1); 
     printf ("x2=%f \n",x2);
     }

     
     system ("pause");
     return 0;

}}
