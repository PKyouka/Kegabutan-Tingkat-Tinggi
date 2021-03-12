#include <iostream>
#include <stdlib.h>
using namespace std;
int main() 
{
  int baris , kolom ;
  char count;
  cout<<"Masukkan banyak baris :"<<endl;
  cin>>baris;
  cout<<"Masukkan banyak kolom :"<<endl;
  cin>>kolom;
  cout<<"Masukkan nilai count :"<<endl;
  cin>>count;
  cout<<"<---------------------------------------------->"<<endl;
  char *peta = (char *) calloc(baris* kolom, sizeof(char)); 
  int i, j;
  for (i = 0;i<baris; i++)
  for (j =  0; j<kolom; j++)
      *(peta + i*baris + j)= count;   
  for (int i = 0; i<baris; i++)
  {
      for(int j = 0 ; j<kolom; j++)
      {
          cout<< (peta[i*baris + j]);
      }
      cout<<("\n");
  }
  free(peta);
}