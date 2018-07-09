#include <iostream>
#include <iomanip>

using namespace std;

// Deklaracja unsigned char (dla bajtów i funkcji) jest konieczna,
// ¿eby bajt nie by³ przypadkiem interpretowany ze znakiem.
// Ka¿dy bajt musi byæ "bez znaku", np. 255 = 11111111
// Gdyby jedynka na pozycji MSB zosta³a potraktowana jako znak,
// to wynik by³by w kodzie U2, czyli 11111111 = -1, a nie 255
//===============================================================
unsigned char bitn (unsigned char z1) {  // 11100000 = 128+64+32
  return (~z1);                          // 00011111 zanegowany z1
}

// Koniunkcja na bajtach b1 & b2
//   189       10111101      128+ 0+32+16+8+4+0+1
// & 192     & 11000000      128+64+ 0+ 0+0+0+0+0
// -----     ----------
//   128       10000000      128+ 0+ 0+ 0+0+0+0+0
//=======================================================
unsigned char bita (unsigned char b1, unsigned char b2) {
  return (b1 & b2);
}

void fwysw (const unsigned char tab[4], string opis) {
  for (int i=0; i<4; i++) cout << setw(8) << int(tab[i]) << ".";
  cout << "   " << opis << endl;
}

void fwyswokt (unsigned char lc) {
  for(int i=sizeof(lc)*8-1; i>=0; --i)
    cout << (lc >> i & 1) << ((i%8)?"":".");
}

void fwysf (const unsigned char tab[4], string opis) {
  for (int i=0; i<4; i++) fwyswokt(tab[i]);
  cout << "   " << opis << endl;
}

main () {
     
const unsigned char maska [4] = {255,255,255,192};

      unsigned char ip    [4] = {198,100, 50,189},
                    nrs   [4],
                    nrk   [4],
                    nrn   [4];

for (int i=0; i<4; i++) {
  nrn[i] = bitn( maska[i]);
  nrs[i] = bita( maska[i], ip[i]);
  nrk[i] = bita( bitn(maska[i]), ip[i]);
}

fwysw  (maska, "maska");
fwysf  (maska, "maska\n");

fwysw  (ip,    "adres ip");
fwysf  (ip,    "adres ip");
fwysf  (maska, "maska");
fwysf  (nrs,    "adres ip\n");

fwysw  (nrs,   "nr sieci");
fwysf  (nrs,   "nr sieci\n");

fwysw  (nrn,   "negacja maski");
fwysf  (nrn,   "negacja maski\n");

fwysw  (nrk,   "nr komputera");
fwysf  (nrk,   "nr komputera\n");

fwysw  (ip,    "adres ip");
fwysf  (ip,    "adres ip");
fwysf  (nrn,   "negacja maski");
fwysf  (nrk,   "nr komputera\n");

cout << endl;
system("pause");
}
