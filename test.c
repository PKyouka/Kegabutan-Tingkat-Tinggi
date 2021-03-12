#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int baris;
    int kolom;
    int i, j, a;
    char** peta2d;

    printf("Masukkan Nilai Baris = ");
    scanf("%d", &baris);
    printf("Masukkan Nilai Kolom = ");
    scanf("%d", &kolom);

    peta2d = calloc (baris, sizeof(char*));
    if (peta2d == NULL)
    {
        printf("Pembuatan Peta Gagal");
        return -1;
    }

    for (int i = 0; i < baris; i++)
    {
        peta2d[i] = calloc(kolom, sizeof(char*));
        if (peta2d[i] == NULL)
        {
            printf("Pembuatan Peta Gagal");
            return -1;
        }
    }

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("%c", peta2d[i][j] = 'O');
        }
        printf("\n");
    }
    for (int i = 0; i < baris; i++)
    {
        free(peta2d[i]);
        peta2d[i] = NULL;
    }
    free(peta2d);
    peta2d = NULL;
    return 0;
}