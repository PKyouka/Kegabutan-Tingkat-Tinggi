#include <stdio.h>

int main(){
    int perm,norm,fact = 1;
    int i,j;
    printf("Masukan Size Of = ");
    scanf("%d",&perm);
    printf("Masukan Count = ");
    scanf("%d",&norm);
    for (i = 1; i <= perm; i++)
    {fact = fact * i;}
    int down =(perm - norm);
    int a=1;
    for (j = 1; j <= down; j++)
    {a = a*j;}
    int foker = (fact / a);
    printf("Hasilnya adalah = %d\n",foker);
}