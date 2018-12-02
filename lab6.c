#include <stdio.h>
#include <string.h>
#define symb 255
int main()
{
    int z = 0;
    char slova[symb];
    char navpaky[symb];
    fgets(slova,symb,stdin);

    for (int i = 0; i<symb; i++)
    {
        if (slova[i] == '\0')
        {
            break;
        }
        else
        z++;
    }
    z--;
    for (int i = 0; i<z; i++)
    {
        if (slova[i] == '\0')
        {
            break;
        }
        else
        printf("%c", slova[i]);
    }
    printf("\n");
    for (int i = z-1, j = 0; i>=0; i--, j++)
    {
        if (slova[j] == '\0')
        {
            break;
        }
        else
        navpaky[i] = slova[j];
    }
    for (int i = 0; i<z; i++)
    {
        if (navpaky[i] == '\0')
        {
            break;
        }
        else
        printf("%c", navpaky[i]);
    }
    printf("\n");
}
