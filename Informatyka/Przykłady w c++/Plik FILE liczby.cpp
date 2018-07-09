/*
Wersja STDIO
Zapisz do pliku kilka liczb, np. p�tl� for
a nast�pnie odczytaj i wy�wietl te liczby
*/

#include<stdio.h> 
#include<ctype.h>

int main() {
  int k,liczba;
  
  FILE *plik;                               // deklaracja pliku
  
  plik = fopen("dane.txt", "w");            // otwieram plik do zapisu
  if (plik!=NULL)                           // je�li plik istnieje,
                                            // czyli zosta� dobrze przygotowany
    for (k=1; k<=10; k++) 
      fprintf(plik,"%d\n",k);               // zapisuj� do pliku za pomoc� fprintf
      //fwrite(&k , sizeof(int), 1, plik);    // albo fwrite

  fclose(plik);                             // zamykam plik, �eby go dalej czyta�
  
  plik = fopen("dane.txt", "r");            // otwieram plik do odczytu
  if (plik!=NULL)
    while(!feof(plik)){
      fscanf(plik,"%d\n",&liczba);          // odczytuj� z pliku za pomoc� fscanf
      //fread(&liczba, sizeof(int), 1, plik); // albo fread
      printf("%d\n",liczba);
    }

  fclose(plik); 
  getchar();
}  
 
