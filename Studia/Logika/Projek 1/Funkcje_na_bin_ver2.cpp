#include <iostream>
#include <string>

using namespace std;

//procedura do wyliczenia postaci binarnej podanej liczby w postaci decymalnej
//argumenty: a to string, do kt�rego b�dzie wpisany wynik przeliczenia
//           l to liczba, kt�ra b�dzie poddana przeliczeniu
void dec_do_bin(string &a, int l)
{
	a.clear(); // string przed wyliczeniem jest czyszczony do pustego stringa
	int p2 = 1;// zmienna przechowujaca potegi liczby 2 potrzebne do oblicze�
	
	// wyliczenie pot�gi liczby 2 mniejszej od podanej liczby
	while(p2 * 2 <= l) 
	{
		p2 *= 2;
	}

	// obliczanie postaci binarnej
	while(l > 0 || p2>0)
	{
		if(p2 <= l) // w przypadku gdzy potega liczby 2 zapisana w p2 jest mniejsza lub r�wna liczbie w l 
		{
			l -= p2; // zmniejszenie l o p2 mniejsze lub r�wne l
			a += "1";// dodanie 1 do wyniku
		}
		else a += "0"; // w przypadku gdy potega liczby 2 zapisana w p2 jest wi�ksza od liczby w l nast�puje dodanie 0 do wyniku 
		p2 = p2 / 2; // pomniejszenie pot�gi liczby 2 zapisanej w p2 przez podzielenie jej przez 2
	}
}

// procedura uzupe�nia puste miejsca zerami do podanej dlugosci postaci binarnej
// argumenty: a to string, do kt�rego bed� dodane zera
//            l to dlugo�� do jakiej liczba w postaci binarnej b�dzie uzupe�niona
void dodanie_zer(string &a, int l)
{
	string b (l-a.size(),'0'); // stworzenie stringa, kt�ry przechowuje zera do dodania do a
	a = b + a; // dopisanie przed a b i wpisanie do a
}


int main()
{
	string bin;
	dec_do_bin(bin,3);
	cout<<bin<<endl;
	dodanie_zer(bin,6);
	cout<<bin<<endl;
	return 0;
}
