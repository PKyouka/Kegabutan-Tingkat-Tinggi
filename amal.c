#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 int baris = 5;
 int kolom = 7;
 char** peta2d;
 printf("Silahkan masukkan jumlah baris yang diinginkan?");
 scanf("%d", &baris);
 printf("Silahkan masukkan jumlah kolom yang diinginkan?");
 scanf("%d", &kolom);
 peta2d = calloc(baris, sizeof(char*));
 if (peta2d == NULL)
 {
 printf("Pembuatan peta gagal\n");
 return -1;
 }
 for (int i = 0; i < baris; i++)
 {
 peta2d[i] = calloc(kolom, sizeof(int));
 if (peta2d[i] == NULL)
 {
 printf("Pembuatan peta gagal\n");
 return -1;
 }
 }
 for (int i = 0; i < baris; i++)
 {
 for (int j = 0; j < kolom; j++)
 {

peta2d[i][j]= 'O';

 printf("%c ", peta2d[i][j]);
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