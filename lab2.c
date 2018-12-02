#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main()
{
    float x, y, z;
    printf("give me int:");
    int n = GetInt();
    int factorial = 1, i;
    for( i = 1; i <= n; i++)
    {
       factorial = factorial*i;
    }
    x= pow(2,n)*factorial;
    y= pow(n,n);
    z=x/y;
    float sum = z, f;
    for( f = z; f <= n; f++)
    {
       sum = sum+f;
    }  
    printf("your sum is:%f\n", sum);
}
