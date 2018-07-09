#include <iostream>
#include <string>

using namespace std;

//procedura do wyliczenia postaci binarnej podanej liczby w postaci decymalnej
//argumenty: a to string, do którego bêdzie wpisany wynik przeliczenia
//           l to liczba, która bêdzie poddana przeliczeniu
void dec_do_bin(string &a, int l)
{
	a.clear(); // string przed wyliczeniem jest czyszczony do pustego stringa
	int p2 = 1;// zmienna przechowujaca potegi liczby 2 potrzebne do obliczeñ
	
	// wyliczenie potêgi liczby 2 mniejszej od podanej liczby
	while(p2 * 2 <= l) 
	{
		p2 *= 2;
	}

	// obliczanie postaci binarnej
	while(l > 0 || p2>0)
	{
		if(p2 <= l) // w przypadku gdzy potega liczby 2 zapisana w p2 jest mniejsza lub równa liczbie w l 
		{
			l -= p2; // zmniejszenie l o p2 mniejsze lub równe l
			a += "1";// dodanie 1 do wyniku
		}
		else a += "0"; // w przypadku gdy potega liczby 2 zapisana w p2 jest wiêksza od liczby w l nastêpuje dodanie 0 do wyniku 
		p2 = p2 / 2; // pomniejszenie potêgi liczby 2 zapisanej w p2 przez podzielenie jej przez 2
	}
}

// procedura uzupe³nia puste miejsca zerami do podanej dlugosci postaci binarnej
// argumenty: a to string, do którego bed¹ dodane zera
//            l to dlugoœæ do jakiej liczba w postaci binarnej bêdzie uzupe³niona
void dodanie_zer(string &a, int l)
{
	string b (l-a.size(),'0'); // stworzenie stringa, który przechowuje zera do dodania do a
	a = b + a; // dopisanie przed a b i wpisanie do a
}

long long unsigned int liczba_wartosciowan(int p)
{
	long long unsigned int liczba = 1;
	for(int i = 0; i<p; i++)
	{
		liczba = liczba * 2; 
	}
	return liczba;
}

int main()
{
	string bin;
	int liczba;
	bool good, fail;
	do
	{
		cout<<"Prosze podac liczbe zmiennych: ";
		cin>>liczba;
		good=cin.good();
		fail=cin.fail();
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	while(good==0 || fail==1 || liczba<=0);
	for (int i = 0; i<liczba_wartosciowan(liczba); i++)
	{
	    dec_do_bin(bin,i);
	    dodanie_zer(bin,liczba);
	    cout<<i+1<<": ";
	    for (int j = 0; j<bin.length(); j++)
		{
			cout<<bin[j]<<" ";
		}
		cout<<endl;	 
	}
	return 0;
}
