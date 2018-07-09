/*
Wersja STDIO
Zapisz do pliku kilka liczb, np. pêtl¹ for
a nastêpnie odczytaj i wyœwietl te liczby
*/

#include<stdio.h> 
#include<ctype.h>

int main() {
  int k,liczba;
  
  FILE *plik;                               // deklaracja pliku
  
  plik = fopen("dane.txt", "w");            // otwieram plik do zapisu
  if (plik!=NULL)                           // jeœli plik istnieje,
                                            // czyli zosta³ dobrze przygotowany
    for (k=1; k<=10; k++) 
      fprintf(plik,"%d\n",k);               // zapisujê do pliku za pomoc¹ fprintf
      //fwrite(&k , sizeof(int), 1, plik);    // albo fwrite

  fclose(plik);                             // zamykam plik, ¿eby go dalej czytaæ
  
  plik = fopen("dane.txt", "r");            // otwieram plik do odczytu
  if (plik!=NULL)
    while(!feof(plik)){
      fscanf(plik,"%d\n",&liczba);          // odczytujê z pliku za pomoc¹ fscanf
      //fread(&liczba, sizeof(int), 1, plik); // albo fread
      printf("%d\n",liczba);
    }

  fclose(plik); 
  getchar();
}  
 
