#include "Classes/Telefon.hpp"
#include <fstream>

Telefon::Telefon(string p, string m, int sz, int e, int b, int c) : Produkt(p,m,c)
{
	szybkosc = sz;
	ekran = e;
	bateria = b;
}

void Telefon::wyswietl_produkt()
{
	cout<<"*Telefon*	Producent: "<<producent<<", Model: "<<model<<", szybkosc: "<<szybkosc<<", ekran: "<<ekran<<", wytrzymalosc baterii: "<<bateria<<
	", cena:"<<cena;
}

void Telefon::zapisz_produkt()
{
	fstream plik;
	plik.open("Telefony.txt", ios::app);
	if(plik.good())
	{
		plik<<producent<<" "<<model<<" "<<szybkosc<<" "<<ekran<<" "<<bateria<<" "<<cena<<" ";
	}
	plik.close();
}

