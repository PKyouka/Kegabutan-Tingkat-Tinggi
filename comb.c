#include <stdio.h>

int main(){
int comb,perm,fact = 1;
int norm,down,a = 1;
int b = 1;
int i,j,k;
    printf("Masukan Size Of = ");
    scanf("%d",&perm);
    printf("Masukan Count = ");
    scanf("%d",&norm);
    down = (perm - norm);
    for (i = 1; i <= perm; i++)
        {fact = fact * i;}
    for (j = 1; j <= norm; j++)
        {a = a * j;}
    for (k = 1; k <= down; k++)
        {b = b * k;}
int reg = fact /(a * b);
    printf("Hasilnya adalah = %d\n",reg);
}