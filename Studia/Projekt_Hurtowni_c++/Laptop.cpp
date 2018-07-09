#include "Classes/Laptop.hpp"
#include <fstream>


Laptop::Laptop(string p, string m, int sz, int e, int c) : Produkt(p,m,c)
{
	szybkosc = sz;
	ekran = e;
}

void Laptop::wyswietl_produkt()
{
	cout<<"*Laptop*		Producent: "<<producent<<", Model: "<<model<<", szybkosc: "<<szybkosc<<", ekran: "<<ekran<<", cena:"<<cena;
}

char Laptop::zwroc_typ()
{
	return 'L';
}

void Laptop::zapisz_produkt()
{
	fstream plik;
	plik.open("Laptop.txt", ios::app);
	if(plik.good())
	{
		plik<<producent<<" "<<model<<" "<<szybkosc<<" "<<ekran<<" "<<cena<<" ";
	}
	plik.close();
}
