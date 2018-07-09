#ifndef PC_hpp
#define PC_hpp
#include <iostream>
#include "Produkt.hpp"

#pragma once

class PC : public Produkt
{
	private:
		int szybkosc;
		
	public:
		PC(string p, string m, int sz, int c);
		void wyswietl_produkt();
		void zapisz_produkt();
};

#endif
