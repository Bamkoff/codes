#include <iostream>
#include <conio-bis.h>
#include <iomanip>
#include <cmath>

using namespace std;

string int2bin (int n) {
  int wynik=n,reszta,d,k;
  char z;
  string sbin="";
  
  while (wynik>0) {
    reszta = wynik % 2;
    wynik /= 2;
    z = reszta ? '1' : '0';
    sbin = z + sbin;
  }
  d=sbin.length();
  for (k=d+1; k<=8; k++) sbin='0'+sbin;
  return sbin;
}

string int2binv2 (int n) {
  int wynik=n,reszta,d,k,maska=1;
  char z;
  string sbin;
  for (k=1; k<=8; k++) {
    z = ((wynik & maska)>0) ? '1' : '0';  
    sbin = z + sbin;
    wynik >>= 1;
  }
  
  return sbin;
}

void pokaz (int w, int k, int n1, int n2, char op) {
  int wynik, arg=2;
  switch (op) {
    case '&': wynik = n1 & n2; break;
    case '|': wynik = n1 | n2; break;
    case '^': wynik = n1 ^ n2; break;
    case '~': wynik = ~n1; arg=1; break;
    case '>': wynik = (n1 >> n2); break;
    case '<': wynik = (n1 << n2); break;
    default : op='#'; wynik = -1; arg=1; break;
  }
  gotoxy(k,w+0); cout << "  " << int2bin(n1) << endl;
  gotoxy(k,w+1); cout << op;
  if (arg==2) cout << " " << int2bin(n2);
  cout << endl;
  gotoxy(k,w+2); cout << "==========\n";
  gotoxy(k,w+3); cout << "  " << int2bin(wynik) << "\n\n";
}

main () {
     int wynik,n=0;
     wynik= ~n;
     cout << wynik << "\n\n";
     system("pause");
     
  int n1,n2;
  char op;
  do {
    clrscr();  
    cout << "Podaj liczby z zakresu 0..255\n";
    cout << "Liczba pierwsza  = ";
    cin >> n1;
    cout << "Liczba druga     = ";
    cin >> n2;
    cout << "Operator &|^~><  : ";
    cin >> op;
    cout << endl << endl;
  
    pokaz(8,20,n1,n2,op);
   
    system("pause");
  } while (op!='0');
}
