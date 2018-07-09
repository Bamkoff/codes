#include "Classes/Drukarka.hpp"
#include <fstream>

Drukarka::Drukarka(string p, string m, bool k, string t, int c) : Produkt(p,m,c)
{
	kolor = k;
	typ = t;
}

void Drukarka::wyswietl_produkt()
{
	cout<<"*Drukarka*	Producent: "<<producent<<", Model: "<<model<<", kolor: "<<kolor<<", typ: "<<typ<<", cena: "<<cena;
}

void Drukarka::zapisz_produkt()
{
	fstream plik;
	plik.open("Drukarka.txt", ios::app);
	if(plik.good())
	{
		plik<<producent<<" "<<model<<" "<<kolor<<" "<<typ<<" "<<cena<<" ";
	}
	plik.close();
}
