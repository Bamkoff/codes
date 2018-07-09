#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "Classes/Produkt.hpp"
#include "Classes/Drukarka.hpp"
#include "Classes/Laptop.hpp"
#include "Classes/Myszka.hpp"
#include "Classes/PC.hpp"
#include "Classes/Telefon.hpp"
#include "Classes/Magazyn.hpp"
#include "Functions/String_to_int.hpp"

int main()
{
	vector<Produkt*> Produkty;
	vector<Magazyn*> Magazyny;
	
	fstream plik;
	plik.open("PC.txt",ios::in);
	if(plik.good())
	{
		string n;
		string prod;
		string model;
		int szybkosc;
		int cena;
		int licznik = 0;
		while(!plik.eof())
		{
			plik>>n;
			if(licznik == 0) 
			{
				prod = n;
				licznik++;
			}
			else if(licznik == 1) 
			{
				model = n;
				licznik++;
			}
			else if(licznik == 2) 
			{
				szybkosc = string_to_number(n);
				licznik++;
			}
			else if(licznik == 3) 
			{
				cena = string_to_number(n);
				licznik++;
			}					
			else if(licznik == 4)
			{
				PC* d= new PC(prod, model, szybkosc, cena);
				Produkty.push_back(d);
				licznik = 1;
				prod = n;
			}
		}
		plik.close();	
	}	
	//----------------------------------------------
	plik.open("Telefony.txt",ios::in);
	if(plik.good())
	{
		string n;
		string prod;
		string model;
		int szybkosc;
		int rozmiar;
		int bateria;
		int cena;
		int licznik = 0;
		while(!plik.eof())
		{
			plik>>n;
			if(licznik == 0) 
			{
				prod = n;
				licznik++;
			}
			else if(licznik == 1) 
			{
				model = n;
				licznik++;
			}
			else if(licznik == 2) 
			{
				szybkosc = string_to_number(n);
				licznik++;
			}
			else if(licznik == 3) 
			{
				rozmiar = string_to_number(n);
				licznik++;
			}
			else if(licznik == 4) 
			{
				bateria = string_to_number(n);
				licznik++;
			}
			else if(licznik == 5) 
			{
				cena = string_to_number(n);
				licznik++;
			}
			else if(licznik == 6)
			{
				Telefon* d = new Telefon(prod, model, szybkosc, rozmiar, bateria, cena);
				Produkty.push_back(d);
				licznik = 1;
				prod = n;
			}
		}
		plik.close();	
	}
	//-----------------------------------------------------
	plik.open("Drukarka.txt",ios::in);
	if(plik.good())
	{
		string n;
		string prod;
		string model;
		bool kolor;
		string typ;
		int cena;
		int licznik = 0;
		while(!plik.eof())
		{
			plik>>n;
			if(licznik == 0) 
			{
				prod = n;
				licznik++;
			}
			else if(licznik == 1) 
			{
				model = n;
				licznik++;
			}
			else if(licznik == 2) 
			{
				kolor = string_to_number(n);
				licznik++;
			}
			else if(licznik == 3) 
			{
				typ = n;
				licznik++;
			}
			else if(licznik == 4) 
			{
				cena = string_to_number(n);
				licznik++;
			}	
			else if(licznik == 5) 
			{
				Drukarka* d= new Drukarka(prod, model, kolor, typ, cena);
				Produkty.push_back(d);
				licznik = 1;
				prod = n;
			}
		}
		plik.close();	
	}
	//-------------------------------------------------------------------	
	plik.open("Myszka.txt",ios::in);
	if(plik.good())
	{
		string n;
		string prod;
		string model;
		string typ;
		int czulosc;
		int cena;
		int licznik = 0;
		while(!plik.eof())
		{
			plik>>n;
			if(licznik == 0) 
			{
				prod = n;
				licznik++;
			}
			else if(licznik == 1) 
			{
				model = n;
				licznik++;
			}
			else if(licznik == 2) 
			{
				typ = n;
				licznik++;
			}
			else if(licznik == 3) 
			{
				czulosc = string_to_number(n);
				licznik++;
			}
			else if(licznik == 4) 
			{
				cena = string_to_number(n);
				licznik++;
			}	
			else if(licznik == 5) 
			{
				Myszka* d= new Myszka(prod, model, typ, czulosc, cena);
				Produkty.push_back(d);
				licznik = 1;
				prod = n;
			}
		}
		plik.close();	
	}
	//--------------------------------------------------------------------------
	plik.open("Laptop.txt",ios::in);
	if(plik.good())
	{
		string n;
		string prod;
		string model;
		int szybkosc;
		int rozmiar;
		int cena;
		int licznik = 0;
		while(!plik.eof())
		{
			plik>>n;
			if(licznik == 0) 
			{
				prod = n;
				licznik++;
			}
			else if(licznik == 1) 
			{
				model = n;
				licznik++;
			}
			else if(licznik == 2) 
			{
				szybkosc = string_to_number(n);
				licznik++;
			}
			else if(licznik == 3) 
			{
				rozmiar = string_to_number(n);
				licznik++;
			}
			else if(licznik == 4) 
			{
				cena = string_to_number(n);
				licznik++;
			}
			else if(licznik == 5) 
			{	
				Laptop* d= new Laptop(prod, model, szybkosc, rozmiar, cena);
				Produkty.push_back(d);
				licznik = 1;
				prod = n;
			}	
		}
		plik.close();	
	}
	//-----------------------------------------------------------------
	while(1)
	{
		int opcja;
		cout<<"1-dodanie produktu"<<endl<<"2-wyswietlenie produktow"<<endl<<"3-dodanie magazynu"<<endl<<"4-wyswietlenie magazynow"<<endl
		<<"5-dodanie produktu do magazynu"<<endl<<"6-usuniecie produktu"<<endl<<"7-usuniecie magazynu"<<endl<<"8-usuniecie produktu z magazynu"<<endl
		<<"9-zapisanie produktu"<<endl<<"10-zmiana ilosci produktu w magazynie"<<endl<<"11-EXIT"<<endl;
		cout<<"Prosze wybrac opcje: ";
		cin>>opcja;	
		cout<<endl<<endl;	
		switch(opcja)
		{
			case 1:
				{
					int opcja2;
					cout<<"Jaki produkt chcesz dodac?"<<endl;
					cout<<"Drukarka: 1"<<endl<<"Myszka:   2"<<endl<<"Laptop:   3"<<endl<<"PC:       4"<<endl<<"Telefon:  5"<<endl;
					cin>>opcja2;
					string prod;
					string model;
					int cena;
					switch(opcja2)
					{
						case 1:
							{
								bool kolor;
								int typ;
								cout<<"Podaj Producenta: ";
								cin>>prod;
								cout<<endl<<"Podaj model: ";
								cin>>model;
								cout<<endl<<"Czy drukuje w kolorze? (1 : tak , 0 : nie) : ";
								cin>>kolor;
								cout<<endl<<"Jaki to typ drukarki? (1 : atramentowa, 2 : laserowa, 3 : iglowa) : ";
								cin>>typ;								
								cout<<endl<<"Podaj cene: ";
								cin>>cena;
								if(typ == 1) 
								{
									Drukarka* d= new Drukarka(prod, model, kolor, "atramentowa", cena);
									Produkty.push_back(d);
								}
								else if(typ == 2) 
								{
									Drukarka* d= new Drukarka(prod, model, kolor, "laserowa", cena);
									Produkty.push_back(d);
								}
								
								else
								{
									Drukarka* d= new Drukarka(prod, model, kolor, "iglowa", cena);
									Produkty.push_back(d);
								}
								break;
							}
						case 2:
							{
								int czulosc;
								int typ;
								cout<<"Podaj Producenta: ";
								cin>>prod;
								cout<<endl<<"Podaj model: ";
								cin>>model;
								cout<<endl<<"Podaj jej czulosc: ";
								cin>>czulosc;
								cout<<endl<<"Jaki to typ myszki? (1 : optyczna, 2 : laserowa) : ";
								cin>>typ;
								cout<<endl<<"Podaj cene: ";
								cin>>cena;
								if(typ == 1) 
								{
									Myszka* d= new Myszka(prod, model, "optyczna", czulosc, cena);
									Produkty.push_back(d);
								}
								else 
								{
									Myszka* d= new Myszka(prod, model, "laserowa", czulosc, cena);
									Produkty.push_back(d);
								}
								break;
							}
						case 3:
							{	
								int szybkosc;
								int rozmiar;
								cout<<"Podaj Producenta: ";
								cin>>prod;
								cout<<endl<<"Podaj model: ";
								cin>>model;
								cout<<endl<<"Podaj szybkosc: ";
								cin>>szybkosc;
								cout<<endl<<"Podaj rozmiar ekranu: ";
								cin>>rozmiar;
								cout<<endl<<"Podaj cene: ";
								cin>>cena;
								Laptop* d= new Laptop(prod, model, szybkosc, rozmiar, cena);
								Produkty.push_back(d);	
								break;
							}
						
						case 4:
							{
								int szybkosc;
								cout<<"Podaj Producenta: ";
								cin>>prod;
								cout<<endl<<"Podaj model: ";
								cin>>model;
								cout<<endl<<"Podaj szybkosc: ";
								cin>>szybkosc;
								cout<<endl<<"Podaj cene: ";
								cin>>cena;
								PC* d= new PC(prod, model, szybkosc, cena);
								Produkty.push_back(d);
								break;
							}
						case 5:
							{
								int szybkosc;
								int rozmiar;
								int bateria;
								cout<<"Podaj Producenta: ";
								cin>>prod;
								cout<<endl<<"Podaj model: ";
								cin>>model;
								cout<<endl<<"Podaj szybkosc: ";
								cin>>szybkosc;
								cout<<endl<<"Podaj rozmiar ekranu: ";
								cin>>rozmiar;
								cout<<endl<<"Podaj dlugosc trzymania baterii w godzinach: ";
								cin>>bateria;
								cout<<endl<<"Podaj cene: ";
								cin>>cena;
								Telefon* d= new Telefon(prod, model, szybkosc, rozmiar, bateria, cena);
								Produkty.push_back(d);
								break;
							}
						default:
							{
								cout<<"Nie wybrales zadnego z powyzszych.";
								system("pause");
							}
					}
					system("cls");
					break;
				}
			case 2:
				{
					for(int i=0;i<Produkty.size();i++)
					{
						cout<<"nr. "<<i<<"  ";
						Produkty[i]->wyswietl_produkt();
						cout<<endl;
					}
					cout<<endl<<endl;
					break;
				}
			case 3:
				{
					string adres;
					cout<<"Podaj adres magazynu: ";
					cin>>adres;
					Magazyn* m = new Magazyn(adres);
					Magazyny.push_back(m);
					system("cls");
					break;
				}
			case 4:
				{
					for(int i=0;i<Magazyny.size();i++)
					{
						cout<<"nr. magazynu: "<<i<<"  ";
						Magazyny[i]->wyswietl_magazyn();
						cout<<endl;
					}
					cout<<endl<<endl;
					break;
				}
			case 5:
				{
					int nr_produktu;
					int nr_magazynu;
					int sztuk;
					cout<<"Podaj numer produktu, ktory chcesz dodac do magazynu: ";
					cin>>nr_produktu;
					cout<<endl<<"Podaj ile sztuk tego produktu jest w magazynie: ";
					cin>>sztuk;
					cout<<endl<<"Podaj numer magazynu, do ktorego chcesz dodac produkt: ";
					cin>>nr_magazynu;
					if(nr_produktu<Produkty.size() && nr_produktu>=0 && sztuk > 0 && nr_magazynu<Magazyny.size() && nr_magazynu>=0)
					{
						if(!Magazyny[nr_magazynu]->sprawdz_czy_na_liscie(Produkty[nr_produktu]))
						Magazyny[nr_magazynu]->dodaj_produkt(Produkty[nr_produktu], sztuk, nr_produktu);
						else cout<<"Produkt juz na liscie";
					}
					else cout<<"Zle podane dane.";
					system("pause");
					system("cls");
					break;
				}
			case 6:
				{
					int nr;
					cout<<"Podaj numer produktu, ktory chesz usunac: ";
					cin>>nr;
					if(nr<0 || nr>=Produkty.size()) cout<<"Nie ma produktu o takim numerze.";
					else
					{
						bool flaga=1;
						for(auto elem : Magazyny)
						{
							if(elem->sprawdz_czy_na_liscie(Produkty[nr])) flaga=0;
						} 
						if(flaga)
						{
							Produkt* p;
							p = Produkty[nr];
							Produkty[nr] = Produkty[Produkty.size()-1];
							Produkty.pop_back();
							delete p;
						}
						else cout<<"Produkt jest w magazynie(aby go usunac nalezy go najpierw usunac z magazynu).";
					}
					system("pause");
					system("cls");
					break;
				}
			case 7:
				{
					int nr;
					cout<<"Podaj numer magazynu, ktory chesz usunac: ";
					cin>>nr;
					
					if(nr<0 || nr>=Magazyny.size()) cout<<"Nie ma magazynu o takim numerze.";
					else
					{
						Magazyn* m;
						m = Magazyny[nr];
						Magazyny[nr] = Magazyny[Magazyny.size()-1];
						Magazyny.pop_back();
						delete m;	
					}
					system("pause");
					system("cls");
					break;
				}
			case 8:
				{
					int nr_produktu;
					int nr_magazynu;
					cout<<"Podaj numer produktu, ktory chesz usunac: ";
					cin>>nr_produktu;
					cout<<endl<<"Podaj numer magazynu,z ktorego chesz usunac produkt: ";
					cin>>nr_magazynu;
					if(nr_magazynu<0 || nr_magazynu>=Magazyny.size()) cout<<endl<<"Nie ma magazynu o takim numerze.";
					else
					{
						if(nr_produktu<0 || nr_produktu>=Produkty.size()) cout<<endl<<"Nie ma produktu o takim numerze.";
						{
							Magazyny[nr_magazynu]->usun_produkt(nr_produktu);
						}
					}
					system("pause");
					system("cls");
					break;	
				}
				case 9:
				{
					int nr_produktu;
					cout<<"Podaj numer produktu, ktory chesz zapisac: ";
					cin>>nr_produktu;
					if(nr_produktu<0 || nr_produktu>=Produkty.size()) cout<<endl<<"Nie ma produktu o takim numerze.";
					{
						Produkty[nr_produktu]->zapisz_produkt();
					}
					system("pause");
					system("cls");
					break;	
				}
				case 10:
				{
					int nr_produktu;
					int nr_magazynu;
					int liczba;
					cout<<"Podaj numer produktu, ktorego ilosc chesz zmienic: ";
					cin>>nr_produktu;
					cout<<endl<<"Podaj numer magazynu,w ktorym chesz zmienic ilosc produktu: ";
					cin>>nr_magazynu;
					cout<<endl<<"Podaj nowa ilosc produktu: ";
					cin>>liczba;
					if(nr_magazynu<0 || nr_magazynu>=Magazyny.size()) cout<<endl<<"Nie ma magazynu o takim numerze.";
					else
					{
						if(nr_produktu<0 || nr_produktu>=Produkty.size()) cout<<endl<<"Nie ma produktu o takim numerze.";
						{
							if(liczba>0)
							{
								Magazyny[nr_magazynu]->edytuj_ilosc(Produkty[nr_produktu], liczba);
							}
						}
					}
					system("pause");
					system("cls");
					break;
				}
				case 11:
					{
						system("cls");
						cout<<"Wyjscie"<<endl;
						return 0;
					}
			default:
				{
					cout<<"Nie ma takiej opcji.";
					system("pause");
					system("cls");
				}
		}
	}	
	return 0;
}
