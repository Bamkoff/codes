#ifndef Telefon_hpp
#define Telefon_hpp
#include <iostream>
#include "Produkt.hpp"

#pragma once

class Telefon : public Produkt
{
	private:
		int szybkosc;
		int ekran;
		int bateria;
		
	public:
		Telefon(string p, string m, int sz, int e, int b, int c);
		void wyswietl_produkt();
		void zapisz_produkt();
};


#endif
