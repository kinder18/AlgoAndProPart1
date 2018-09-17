#include <stdio.h>
#include <math.h>

int main()
{ 
   double/float a=1000, b=0.0001, fin;
   fin=(pow(a-b,2)-(pow(a,2)-2*a*b))/pow(b,2);
   printf("%\n", fin);
}   
