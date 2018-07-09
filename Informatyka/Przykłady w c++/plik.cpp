/*
Tryby pracy ze stumieniem fstream
---------------------------------
Do ustawienia trybu pracy z plikiem s³u¿¹ flagi zdefiniowane w klasie ios.
Jeœli podajemy flagê (tryb), to trzeba j¹ przywo³aæ z klasy (obszaru) ios,
dlatego trzeba pisaæ ios::

Co zrobiæ je¿eli otwieramy plik do zapisu ale nie chcemy mazaæ jego zawartoœci,
ale dopisaæ coœ na koñcu?
Najlepiej otworzyæ go i ustawiæ bie¿¹c¹ pozycjê do zapisu na koñcu pliku.
S³u¿y do tego flaga ios::app.
Wszystkie tryby pracy s¹ zdefiniowane w klasie ios dlatego s¹ poprzedzone przez ios::
Mo¿na podaæ wiêcej ni¿ jeden tryb pracy u¿ywaj¹c operatora bitowego OR.

ios::app	    Do³¹cza dane do pliku
ios::ate	    Przy pierwszym otwarciu bie¿¹c¹ pozycj¹ jest jego koniec
ios::binary	    Otwarcie pliku w trybie binarnym, w którym nie s¹ interpretowane znaki:
                powrót karetki, linefeed
ios::in	        Otwarcie pliku do czytania
ios::noncreate	Je¿eli plik nie istnieje operacja koñczy siê niepowodzeniem.
ios::noreplace	Jeœli plik istnieje, to próba jego otwarcia koñczy siê niepowodzeniem,
                chyba ¿e ustawiony jest ios::app lub ios::ate
ios::out	    Otwarcie pliku do pisania
ios::trunc	    Je¿eli plik istnieje, zostaje opró¿niony

Przyk³ady:      ifstream plik("nazwa.roz",ios::binary);
                fstream plik("nazwa.roz",ios::out | ios::noreplace | ios::ate);
                ofstream plik("nazwa.roz",ios::app | ios::nocreate); 
*/

#include <iostream>
#include <fstream>
using namespace std;

int main () {
  int j=0;
  double x;
  
  ifstream F ("dane.txt");      // otwarcie pliku do czytania
  while (F) {                   // pêtla dzia³a, dopóki plik jest "dobry"
    F >> x;                     // czytanie z pliku liczby nr j
    if (F.eof()) break;         // To jest zabezpieczenie przed podwójnym
                                // czytaniem ostatniej liczby w pliku.
                                // To jedna z mo¿liwoœci, bo wystarczy rêcznie
                                // usun¹æ ostatni wiersz i ju¿ bêdzie Ÿle
    j++;
    cout << j << ".  " << x << endl;
  }
  F.close();
  
  cout << "W pliku bylo     " << j << " liczb\n";
  
  ofstream G ("dane.txt", ios::app); // otwarcie drugiego pliku do zapisu
  if (G) {
    G << j+1 << "\n";          // zapisywanie do pliku 
  }
  G.close();
  cout << "Zapisano liczbe  " << j+1 << "\n";
  
  cout << "\n\n";
	system("pause");
  return 0;
}
