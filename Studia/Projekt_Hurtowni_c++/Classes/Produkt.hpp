#ifndef Produkt_hpp
#define Produkt_hpp
#include <iostream>
#include <string>

using namespace std;

#pragma once

class Produkt
{	
	public:
		string producent;
		string model;
		int cena;
		Produkt(string p, string m, int c);
		virtual void wyswietl_produkt() = 0;
		virtual void zapisz_produkt() = 0;
};

#endif
