#include <iostream>
#include <string>
using std::string;

class Urzadzenie
{
	protected:
		double cena;
		string kod_produktu;
		virtual void wyswietl() = 0;
		Urzadzenie(string s, double c) 
		{
			cena = c;
			kod_produktu = s;
		}	
};

class Laptop : public Urzadzenie
{
	private:
		int szybkosc;
		int dl_trzymania_baterii;
	public:
		Laptop(string kod, double c, int szyb, int dl) : Urzadzenie(kod,c)
		{
			szybkosc = szyb;
			dl_trzymania_baterii = dl;
		}
};
