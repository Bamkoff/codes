#include "Classes/Magazyn.hpp"

Magazyn::Magazyn(string n) {top = nullptr; adres=n;}

Magazyn::~Magazyn()
{
	while(top != nullptr)
	{
		list* temp = new list;
		temp = top;
		top = top->next;
		delete temp;
	}
}
		
void Magazyn::dodaj_produkt(Produkt* p, int i, int n)
{
	if(!sprawdz_czy_na_liscie(p))
	{
		list* l = new list;
		l->prod = p;
		l->ilosc = i;
		l->nr_prod = n;
		
		if(top == nullptr) top = l;
		else
		{
			l->next = top;
			top->prev = l;
			top = l;	
		}
	}
	else
	{
		cout<<"Error::Produkt juz jest na liscie."<<endl;
	}
	
}

void Magazyn::usun_produkt(int n)
{
	if (top==nullptr) cout<<"Nie ma juz zadnych produktow na liscie."<<endl;
	else
	{
		list* l = new list;
		l = top;
		bool flaga=1;
		while(l!=nullptr && flaga)
		{
			if(l->nr_prod==n)
			{
				if(l->prev==nullptr && l->next==nullptr) top = nullptr;
				else if(l->prev!=nullptr && l->next==nullptr) l->prev->next = nullptr;
				else if(l->prev==nullptr && l->next!=nullptr) 
				{
					top = l->next;
					l->next->prev = nullptr;
				}
				else if(l->prev!=nullptr && l->next!=nullptr)
				{
					l->prev->next = l->next;
					l->next->prev = l->prev;
				}
				flaga = 0;
			}
			if(flaga) l = l->next;
		}
		if(flaga==1) cout<<"Produktu nie bylo na liscie."<<endl;
		else delete l;
	}
}

void Magazyn::wyswietl_magazyn()
{
	cout<<"Adres Magazynu: "<<adres<<endl<<"Lista Przechowywanych produktow:"<<endl;
	list* l = new list;
	l = top;
	while(l!=nullptr)
	{
		cout<<"nr."<<l->nr_prod<<" ";
		l->prod->wyswietl_produkt();
		cout<<", ilosc w magazynie: "<<l->ilosc;
		cout<<endl;
		l = l->next;
	}
}

bool Magazyn::sprawdz_czy_na_liscie(Produkt* p)
{
	list* l = new list;
	l = top;
	while(l!=nullptr)
	{
		if(p == l->prod) return 1;
		l = l->next;
	}
	return 0;
}

void Magazyn::edytuj_ilosc(Produkt* p, int l)
{
	bool flaga=1;
	list* i = new list;
	i = top;
	while(i!=nullptr)
	{
		if(p == i->prod) 
		{
			i->ilosc = l;
			flaga = 0;
		}
		i = i->next;
	}
}
