#include "Classes/Myszka.hpp"
#include <fstream>

Myszka::Myszka(string p, string m, string t, int cz, int c) : Produkt(p,m,c)
{
	typ = t;
	czulosc = cz;
}

void Myszka::wyswietl_produkt()
{
	cout<<"*Myszka*		Producent: "<<producent<<", Model: "<<model<<", typ: "<<typ<<", czulosc: "<<czulosc<<", cena:"<<cena;
}

void Myszka::zapisz_produkt()
{
	fstream plik;
	plik.open("Myszka.txt", ios::app);
	if(plik.good())
	{
		plik<<producent<<" "<<model<<" "<<typ<<" "<<czulosc<<" "<<cena<<" ";
	}
	plik.close();
}
