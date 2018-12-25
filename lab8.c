#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[111];
    int duration;
    char author[111];
    int price;
}Musichka;
void printMusic (FILE *f, int number);
int main()
{
    FILE *f = fopen("music.dat", "rb");
    int na;
    char* filename = "music.dat";
    if(fopen(filename , "rb") == NULL)
    {
        exit(0);
    }
    printf("Number of songs : ");
    scanf("%d", &na);

    printMusic(f, na);
    fclose(f);
    return 0;
}
void printMusic (FILE *f,int number)
{
    Musichka Music[number];
    int i = 0;

    while(!feof(f) && i<number)
    {
        fread(&Music[i],sizeof(Musichka), 1, f );
        printf("Name of song: %s\nDuration: %d \nAuthor: %s \nPrice: %d \n",
        Music[i].name, Music[i].duration,Music[i].author,Music[i].price);
        i++;
    }
}
