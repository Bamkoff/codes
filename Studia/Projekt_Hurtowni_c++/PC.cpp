#include "Classes/PC.hpp"
#include <fstream>

PC::PC(string p, string m, int sz, int c) : Produkt(p,m,c)
{
	szybkosc = sz;
}

void PC::wyswietl_produkt()
{
	cout<<"*PC*		Producent: "<<producent<<", Model: "<<model<<", szybkosc: "<<szybkosc<<", cena:"<<cena;
}

void PC::zapisz_produkt()
{
	fstream plik;
	plik.open("PC.txt", ios::app);
	if(plik.good())
	{
		plik<<producent<<" "<<model<<" "<<szybkosc<<" "<<cena<<" ";
	}
	plik.close();
}

