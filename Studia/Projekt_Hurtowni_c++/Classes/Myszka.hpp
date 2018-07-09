#ifndef Myszka_hpp
#define Myszka_hpp
#include <iostream>
#include "Produkt.hpp"

#pragma once

class Myszka : public Produkt
{
	private:
		string typ;
		int czulosc;
		
	public:
		Myszka(string p, string m, string t, int cz, int c);
		void wyswietl_produkt();
		void zapisz_produkt();
};

#endif
