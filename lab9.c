#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fout = fopen("F1","w");
    FILE *fin = fopen("F2","w");
    if(fopen("F1","w") == NULL ||fopen("F2","w") == NULL )
    {
        printf("Oops! Something went wrong! ");
        exit(0);
    }
    char string[80] = " ";
    int count, number;
    printf("Give me a number of rows: ");
    scanf("%d", &number);
    for (int i = 0; i<number; i++)
    { 
        printf("%d row: ", i);
        scanf("%[^.]%*c", string);
        printf("%s",string);
        printf(" noted in F1\n");
        fputs(string, fout);
        int nc = 0;
        for (count = 0; string[count] != '\0'; count++)
        {
            if ((string[count] == 'a')||(string[count] == 'e')||(string[count] == 'y')||(string[count] == 'u')||(string[count] == 'i')||(string[count] == 'o'))
            {           
                nc += 1;
            }
        }
        printf("NO. of loud sounds in the string = %d\n", nc);
    }    
    int max_string = 0;
    for (int i = 0; i<number; i++)
    { 
        for (count = 0; string[count] != '\0'; count++)
        {  
            if(string[count] > max_string) 
            {
                max_string = i;
            }
        }
    }
    printf("Number of row with max number of loud sounds: %d\n" , max_string); 
    for (int i = 0; i<number; i++)
    { 
        if(i != max_string) 
        {
             printf(" noted in F2\n");
             fputs(string, fin);
        }
    }
    fclose(fout);   
    fclose(fin);    
}
