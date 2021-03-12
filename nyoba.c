#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int baris;
    int kolom;
    char** peta2d;
    int i,j;

    printf("Buat Peta Anda Dengan memasukan baris dan kolom\n");
    printf("Masukan Baris\n");
    scanf("%d", &baris);
    printf("Masukan Kolom\n");
    scanf("%d", &kolom);

    peta2d = calloc(baris, sizeof(char*));
        if (peta2d == NULL){
        printf("Pembuatan peta gagal\n");
        return -1;
        }
    for (i = 0; i < baris; i++){
    peta2d[i] = calloc(kolom, sizeof(char*));
        if (peta2d[i] == NULL){
        printf("Pembuatan peta gagal\n");
        return -1;
        }
    }
    for (i = 0; i < baris; i++)
    {
    for (j = 0; j < kolom; j++)
        {
        printf("%c", peta2d[i][j] = 'O');
        }
        printf("\n");
 }

    for (i = 0; i < baris; i++)
    {
        free(peta2d[i]);
        peta2d[i] = NULL;
    }

    free(peta2d);
    peta2d = NULL;
    printf("Pencet Kunci Manapun !");
    int a;
    scanf("%d",&a);
    system("clear");
    return 0;
}
