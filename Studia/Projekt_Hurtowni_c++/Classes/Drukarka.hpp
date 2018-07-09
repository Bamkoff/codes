#ifndef Drukarka_hpp
#define Drukarka_hpp
#include <iostream>
#include "Produkt.hpp"

#pragma once

class Drukarka : public Produkt
{
	private:
		bool kolor;
		string typ;
		
	public:
		Drukarka(string p, string m, bool k, string t, int c);
		void wyswietl_produkt();
		void zapisz_produkt();
};

#endif
