#include <string.h>

#pragma once

class Osoba
{
 public:

  void ustalImie(char* i) { strcpy(imie,i); }
  void ustalNazwisko(char* n) { strcpy(nazwisko,n); }
  void ustalRokUr(int r) { rokur=r; }

  const char* podajImie() { return imie; }
  const char* podajNazwisko() { return nazwisko; }
  int podajRokUr() { return rokur; }

  void ustalDane(char* i, char* n, int r);

  Osoba() {};
  Osoba(char* i, char* n, int r);

 private:
  char imie[40];
  char nazwisko[40];
  int rokur;
  
};


