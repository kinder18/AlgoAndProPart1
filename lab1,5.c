#include <stdio.h>
#include <math.h>

int main()
   {
   double m=23, n=25, x, y, z;
   x=m-++n;
   y=++m>--n;
   z=--<++m;
   printf("%f\n %f\n %f\n", x, y, z);
   }
