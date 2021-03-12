#include <stdio.h>
#include <stdlib.h>

int main (){
int baris;
int kolom;
printf("Masukan Input Baris : ");
scanf("%d",&baris);
printf("Masukan Input Kolom : ");
scanf("%d",&kolom);
int *peta = (int *) malloc(baris*kolom* sizeof(int));
int i,j,count = 0;
    for (i = 0; i < baris; i++)
    for (j = 0; j < kolom; j++)
        *(peta + i*baris + j )= ++count;
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            printf(" O ");
        }
        puts("");
    }
    printf("Pencet Kunci Manapun !\n");
int a;
    scanf("%d",&a);
    system("clear");
return 0;
}
