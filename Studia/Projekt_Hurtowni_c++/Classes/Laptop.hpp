#ifndef Laptop_hpp
#define Laptop_hpp
#include <iostream>
#include "Produkt.hpp"

#pragma once

class Laptop : public Produkt
{
	private:
		int szybkosc;
		int ekran;
		
	public:
		Laptop(string p, string m, int sz, int e, int c);
		void wyswietl_produkt();
		char zwroc_typ();
		void zapisz_produkt();
};

#endif
