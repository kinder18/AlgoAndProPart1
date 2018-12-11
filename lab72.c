#include <stdio.h>
#include <math.h>
#include <cs50.h>
int convert(int decimalNumber)
{
    int i = 1,  octalNumber = 0;
    while(decimalNumber != 0)
    {                        
        octalNumber += (decimalNumber % 5) * i;
        decimalNumber = decimalNumber/5;
        i *= 10;
    }
    return octalNumber;
}
int main()
{   
    int a=3, b=5, c=8;
    int A[a];
        printf("Array A is:");
        for(int i=0;i<a;i++)
        {
            A[i] = rand()%100;
            printf("%d ", A[i]);
        }
        printf("\n");
        printf("Converted array A is:");
        for(int i=0;i<a;i++)
        {
            A[i]=convert(A[i]);
            printf("%d ",A[i]);
        } 
        printf("\n");
    int B[b];
        printf("Array B is:"); 
        for(int i=0;i<b;i++)
        {
            B[i] = rand()%100;
            printf("%d ",B[i]);
        }
        printf("\n");
        printf("Converted array B is:");
        for(int i=0;i<b;i++)
        {
            B[i] = convert(B[i]);
            printf("%d ",B[i]);
        } 
        printf("\n");
    int C[c];
        printf("Array C is:");
        for(int i=0;i<c;i++)
        {
            C[i] = rand()%100;
            printf("%d ",C[i]);
        }
        printf("\n");
        printf("Converted array C is:");
        for(int i=0;i<c;i++)
        {
            C[i]=convert(C[i]);
            printf("%d ",C[i]);
        } 
        printf("\n");
}
