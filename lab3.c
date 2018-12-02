#include <stdio.h>
#include <math.h>
#define pi 3.14
double x, y, a = 0.1, b = 0.8, SN, SE, Z;
int main()
{
    for( x = a; x <= b; x +=0.7/10.0)
    {
        int n;
        SE = 0; SN =  0;
        for ( n = 1; n <= 35; n++)
        {
            Z = (pow(x,n)*cos(n*(pi/3)))/n;
            SN += Z;
            if(fabs(Z) < 0.0001)
            {
                break;
            }
            SE += Z;
        }   
        y = -1.0/2.0*log(1-2*x*cos(pi/3)+pow(x,2)); 
    printf("X= %f   SN = %f   SE = %f   Y = %f \n", x, SN, SE, y);    
    }
}
