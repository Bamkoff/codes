/*
Tryby pracy ze stumieniem fstream
---------------------------------
Do ustawienia trybu pracy z plikiem s�u�� flagi zdefiniowane w klasie ios.
Je�li podajemy flag� (tryb), to trzeba j� przywo�a� z klasy (obszaru) ios,
dlatego trzeba pisa� ios::

Co zrobi� je�eli otwieramy plik do zapisu ale nie chcemy maza� jego zawarto�ci,
ale dopisa� co� na ko�cu?
Najlepiej otworzy� go i ustawi� bie��c� pozycj� do zapisu na ko�cu pliku.
S�u�y do tego flaga ios::app.
Wszystkie tryby pracy s� zdefiniowane w klasie ios dlatego s� poprzedzone przez ios::
Mo�na poda� wi�cej ni� jeden tryb pracy u�ywaj�c operatora bitowego OR.

ios::app	    Do��cza dane do pliku
ios::ate	    Przy pierwszym otwarciu bie��c� pozycj� jest jego koniec
ios::binary	    Otwarcie pliku w trybie binarnym, w kt�rym nie s� interpretowane znaki:
                powr�t karetki, linefeed
ios::in	        Otwarcie pliku do czytania
ios::noncreate	Je�eli plik nie istnieje operacja ko�czy si� niepowodzeniem.
ios::noreplace	Je�li plik istnieje, to pr�ba jego otwarcia ko�czy si� niepowodzeniem,
                chyba �e ustawiony jest ios::app lub ios::ate
ios::out	    Otwarcie pliku do pisania
ios::trunc	    Je�eli plik istnieje, zostaje opr�niony

Przyk�ady:      ifstream plik("nazwa.roz",ios::binary);
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
  while (F) {                   // p�tla dzia�a, dop�ki plik jest "dobry"
    F >> x;                     // czytanie z pliku liczby nr j
    if (F.eof()) break;         // To jest zabezpieczenie przed podw�jnym
                                // czytaniem ostatniej liczby w pliku.
                                // To jedna z mo�liwo�ci, bo wystarczy r�cznie
                                // usun�� ostatni wiersz i ju� b�dzie �le
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
