#ifndef Magazyn_hpp
#define Magazyn_hpp
#include <iostream>
#include "Produkt.hpp"

class Magazyn
{
	protected:
		string adres;
		struct list
		{
			int nr_prod;
			Produkt* prod;
			int ilosc;
			list* next;
			list* prev;
			list() {next = nullptr; prev = nullptr;}
		};
		
		list* top; 
	
	public:
		Magazyn(string n);
		~Magazyn();
		void dodaj_produkt(Produkt* p,int i,int n);
		void usun_produkt(int n);
		void wyswietl_magazyn();
		bool sprawdz_czy_na_liscie(Produkt* p);
		void edytuj_ilosc(Produkt* p, int l);
};

#endif

