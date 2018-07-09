/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projekt_hurtowni;

import java.io.*;
import java.util.*;

/**
 *
 * @author Bartek
 */
public class Projekt_Hurtowni {
    /**
     * @param args the command line arguments
     * @throws java.io.FileNotFoundException
     */
    public static void main(String[] args) throws FileNotFoundException, IOException {
          Scanner in = new Scanner(System.in);
          List<Produkt> Produkty = new ArrayList<>();
          List<Magazyn> Magazyny = new ArrayList<>();
          {
            String tekst = "";
            String producent = "";
            String model = "";
            String kolor = "";
            String typ = "";
            String cena = "";
            BufferedReader fileReader = new BufferedReader(new FileReader("Drukarka.txt"));
            tekst = fileReader.readLine();
            if(tekst != null)
            {
                int indeks = 0;
                int licznik = 0;
                while(indeks < tekst.length())
                {
                  if(tekst.charAt(indeks) == ':') 
                  {
                    licznik++;
                  }
                  else if(licznik == 0) 
                  {
                    producent += tekst.charAt(indeks);
                  }
                  else if(licznik == 1) 
                  {
                    model += tekst.charAt(indeks);
                  }
                  else if(licznik == 2) 
                  {
                    kolor += tekst.charAt(indeks);
                  }
                  else if(licznik == 3) 
                  {
                    typ += tekst.charAt(indeks);
                  }
                  else if(licznik == 4) 
                  {
                    cena += tekst.charAt(indeks);
                  }
                  if(licznik == 5)
                  {
                    Drukarka d = new Drukarka(producent, model, kolor , typ, Integer.parseInt(cena));
                    Produkty.add(d); 
                    licznik=0;
                    producent = "";
                    model = "";
                    kolor = "";
                    typ = "";
                    cena = "";
                  }
                  indeks++;
                }
            }
            fileReader.close();
          }
          
          {
            String tekst = "";
            String producent = "";
            String model = "";
            String szybkosc = "";
            String ekran = "";
            String cena = "";
            BufferedReader fileReader = new BufferedReader(new FileReader("Laptop.txt"));
            tekst = fileReader.readLine();
            if(tekst != null)
            {
                int indeks = 0;
                int licznik = 0;
                while(indeks < tekst.length())
                {
                  if(tekst.charAt(indeks) == ':') 
                  {
                    licznik++;
                  }
                  else if(licznik == 0) 
                  {
                    producent += tekst.charAt(indeks);
                  }
                  else if(licznik == 1) 
                  {
                    model += tekst.charAt(indeks);
                  }
                  else if(licznik == 2) 
                  {
                    szybkosc += tekst.charAt(indeks);
                  }
                  else if(licznik == 3) 
                  {
                    ekran += tekst.charAt(indeks);
                  }
                  else if(licznik == 4) 
                  {
                    cena += tekst.charAt(indeks);
                  }
                  if(licznik == 5)
                  {
                    Laptop d = new Laptop(producent, model, Integer.parseInt(szybkosc) , Integer.parseInt(ekran), Integer.parseInt(cena));
                    Produkty.add(d); 
                    licznik=0;
                    producent = "";
                    model = "";
                    szybkosc = "";
                    ekran = "";
                    cena = "";
                  }
                  indeks++;
                }
            }
            fileReader.close();
          }
          
          {
            String tekst = "";
            String producent = "";
            String model = "";
            String czulosc = "";
            String typ = "";
            String cena = "";
            BufferedReader fileReader = new BufferedReader(new FileReader("Myszka.txt"));
            tekst = fileReader.readLine();
            if(tekst != null)
            {
                int indeks = 0;
                int licznik = 0;
                while(indeks < tekst.length())
                {
                  if(tekst.charAt(indeks) == ':') 
                  {
                    licznik++;
                  }
                  else if(licznik == 0) 
                  {
                    producent += tekst.charAt(indeks);
                  }
                  else if(licznik == 1) 
                  {
                    model += tekst.charAt(indeks);
                  }
                  else if(licznik == 2) 
                  {
                    czulosc += tekst.charAt(indeks);
                  }
                  else if(licznik == 3) 
                  {
                    typ += tekst.charAt(indeks);
                  }
                  else if(licznik == 4) 
                  {
                    cena += tekst.charAt(indeks);
                  }
                  if(licznik == 5)
                  {
                    Myszka d = new Myszka(producent, model, typ, Integer.parseInt(czulosc), Integer.parseInt(cena));
                    Produkty.add(d); 
                    licznik=0;
                    producent = "";
                    model = "";
                    czulosc = "";
                    typ = "";
                    cena = "";
                  }
                  indeks++;
                }
           }
            fileReader.close();
          }
          {
            String tekst = "";
            String producent = "";
            String model = "";
            String szybkosc = "";
            String cena = "";
            BufferedReader fileReader = new BufferedReader(new FileReader("PC.txt"));
            tekst = fileReader.readLine();
            if(tekst != null)
            {
                int indeks = 0;
                int licznik = 0;
                while(indeks < tekst.length())
                {
                  if(tekst.charAt(indeks) == ':') 
                  {
                    licznik++;
                  }
                  else if(licznik == 0) 
                  {
                    producent += tekst.charAt(indeks);
                  }
                  else if(licznik == 1) 
                  {
                    model += tekst.charAt(indeks);
                  }
                  else if(licznik == 2) 
                  {
                    szybkosc += tekst.charAt(indeks);
                  }
                  else if(licznik == 3) 
                  {
                    cena += tekst.charAt(indeks);
                  }
                  if(licznik == 4)
                  {
                    PC d = new PC(producent, model, Integer.parseInt(szybkosc), Integer.parseInt(cena));
                    Produkty.add(d); 
                    licznik=0;
                    producent = "";
                    model = "";
                    szybkosc = "";
                    cena = "";
                  }
                  indeks++;
                }
            }
            fileReader.close();
          }
          
          {
            String tekst = "";
            String producent = "";
            String model = "";
            String szybkosc = "";
            String ekran = "";
            String bateria = "";
            String cena = "";
            BufferedReader fileReader = new BufferedReader(new FileReader("Telefon.txt"));
            tekst = fileReader.readLine();
            if(tekst != null)
            {
                int indeks = 0;
                int licznik = 0;
                while(indeks < tekst.length())
                {
                  if(tekst.charAt(indeks) == ':') 
                  {
                    licznik++;
                  }
                  else if(licznik == 0) 
                  {
                    producent += tekst.charAt(indeks);
                  }
                  else if(licznik == 1) 
                  {
                    model += tekst.charAt(indeks);
                  }
                  else if(licznik == 2) 
                  {
                    szybkosc += tekst.charAt(indeks);
                  }
                  else if(licznik == 3) 
                  {
                    ekran += tekst.charAt(indeks);
                  }
                  else if(licznik == 4) 
                  {
                    bateria += tekst.charAt(indeks);
                  }
                  else if(licznik == 5) 
                  {
                    cena += tekst.charAt(indeks);
                  }
                  if(licznik == 6)
                  {
                    Telefon d = new Telefon(producent, model, Integer.parseInt(szybkosc),Integer.parseInt(ekran),Integer.parseInt(bateria), Integer.parseInt(cena));
                    Produkty.add(d); 
                    licznik=0;
                    producent = "";
                    model = "";
                    szybkosc = "";
                    ekran = "";
                    bateria = "";
                    cena = "";
                  }
                  indeks++;
                }
            }
            fileReader.close();
          }
             
          int opcja = 0;
          while(opcja != 11)
          {
            System.out.println("1-dodanie produktu"); 
            System.out.println("2-wyswietlenie produktow");
            System.out.println("3-dodanie magazynu");
            System.out.println("4-wyswietlenie magazynow");
            System.out.println("5-dodanie produktu do magazynu");
            System.out.println("6-usuniecie produktu");
            System.out.println("7-usuniecie magazynu");
            System.out.println("8-usuniecie produktu z magazynu");
            System.out.println("9-zapisanie produktu");
            System.out.println("10-zmiana ilosci produktu w magazynie");
            System.out.println("11-EXIT");
            System.out.println("Prosze wybrac opcje: ");
            opcja = in.nextInt();
            switch(opcja)
            {
                case 1:
                {
                    String prod;
                    String model;
                    int cena;
                    int opcja2;
                    System.out.println("Jaki produkt chcesz dodac?");
                    System.out.println("Drukarka: 1");
                    System.out.println("Myszka:   2");
                    System.out.println("Laptop:   3");
                    System.out.println("PC:       4");
                    System.out.println("Telefon:  5");
                    opcja2 = in.nextInt();
                    System.out.println("Podaj Producenta: ");
                    Scanner p = new Scanner(System.in);
                    prod = p.nextLine();
                    System.out.println("Podaj model: ");
                    Scanner m = new Scanner(System.in);
                    model = m.nextLine();
                    switch(opcja2)
                    {
                        case 1:
                        {			
                            int kolor;
                            int typ;
                            System.out.println("Czy drukuje w kolorze? (1 : tak , 0 : nie) : ");
                            kolor = in.nextInt();
                            String k;
                            if(kolor == 1)
                            {
                            k = "tak";
                            }
                            else
                            {
                                k = "nie";
                            }
                            System.out.println("Jaki to typ drukarki? (1 : atramentowa, 2 : laserowa, 3 : iglowa) : ");
                            typ = in.nextInt();
                            System.out.println("Podaj cene: ");
                            cena = in.nextInt();
                            switch (typ) {
                                case 1:
                                {
                                    Drukarka d = new Drukarka(prod, model, k , "atramentowa", cena);
                                    Produkty.add(d);
                                    break;
                                }
                                case 2:
                                {
                                    Drukarka d = new Drukarka(prod, model, k, "laserowa", cena);
                                    Produkty.add(d);
                                    break;
                                }
                                default:
                                {
                                    Drukarka d = new Drukarka(prod, model, k, "iglowa", cena);
                                    Produkty.add(d);
                                    break;
                                }
                            }
                            break;
                        }
                        case 2:
                        {
                            int czulosc;
                            int typ;
                            System.out.println("Podaj jej czulosc: ");
				czulosc = in.nextInt();
				System.out.println("Jaki to typ myszki? (1 : optyczna, 2 : laserowa) : ");
				typ = in.nextInt();
				System.out.println("Podaj cene: ");
                                cena = in.nextInt();
				if(typ == 1) 
				{
                                    Myszka d = new Myszka(prod, model, "optyczna", czulosc, cena);
                                    Produkty.add(d);
				}
				else 
				{
                                    Myszka d = new Myszka(prod, model, "laserowa", czulosc, cena);
                                    Produkty.add(d);
                                }
				break;
                            }
                            case 3:
                            {	
                                int szybkosc;
                                int rozmiar;
                                System.out.println("Podaj szybkosc: ");
                                szybkosc = in.nextInt();
                                System.out.println("Podaj rozmiar ekranu: ");
                                rozmiar = in.nextInt();
                                System.out.println("Podaj cene: ");
                                cena = in.nextInt();
                                Laptop d = new Laptop(prod, model, szybkosc, rozmiar, cena);
                                Produkty.add(d);	
				break;
                            }
						
                            case 4:
                            {
				int szybkosc;
				System.out.println("Podaj szybkosc: ");
				szybkosc = in.nextInt();
				System.out.println("Podaj cene: ");
				cena = in.nextInt();
				PC d= new PC(prod, model, szybkosc, cena);
				Produkty.add(d);
				break;
                            }
                            case 5:
                            {
                                int szybkosc;
				int rozmiar;
				int bateria;
				System.out.println("Podaj szybkosc: ");
				szybkosc = in.nextInt();
				System.out.println("Podaj rozmiar ekranu: ");
				rozmiar = in.nextInt();
				System.out.println("Podaj dlugosc trzymania baterii w godzinach: ");
				bateria = in.nextInt();
				System.out.println("Podaj cene: ");
				cena = in.nextInt();
				Telefon d= new Telefon(prod, model, szybkosc, rozmiar, bateria, cena);
				Produkty.add(d);
				break;
                            }
                        }
                      break;
                  }
                case 2:
                {
                    for(int i=0;i<Produkty.size();i++)
                    {
                        System.out.print("nr. " + i + "  ");
                        Produkty.get(i).wyswietl_produkt();
                        System.out.println();
                    }
                    System.out.println("\n");
                    break;
                }
                case 3:
                {
                    String adres;
                    System.out.println("Podaj adres magazynu: ");
                    Scanner a = new Scanner(System.in);
                    adres = a.nextLine();
                    Magazyn m = new Magazyn(adres);
                    Magazyny.add(m);
                    break;
                }
                case 4:
                {
                    for(int i=0;i<Magazyny.size();i++)
                    {
                        System.out.println("nr. magazynu: " + i + "  ");
                        Magazyny.get(i).wyswietl_magazyn();
                        System.out.println();
                    }
                    System.out.println("\n");
                    break;
                }
                case 5:
                {
                    int nr_produktu;
                    int nr_magazynu;
                    int sztuk;
                    System.out.println("Podaj numer produktu, ktory chcesz dodac do magazynu: ");
                    nr_produktu = in.nextInt();
                    System.out.println("Podaj ile sztuk tego produktu jest w magazynie: ");
                    sztuk = in.nextInt();
                    System.out.println("Podaj numer magazynu, do ktorego chcesz dodac produkt: ");
                    nr_magazynu = in.nextInt();
                    if(nr_magazynu<0 || nr_magazynu>=Magazyny.size()) System.out.println("Nie ma magazynu o takim numerze.");
                    else
                    {
                        if(nr_produktu<0 || nr_produktu>=Produkty.size()) System.out.println("Nie ma produktu o takim numerze.");
                        else
                        {
                            if(!Magazyny.get(nr_magazynu).czy_na_liscie(Produkty.get(nr_produktu)))
                            Magazyny.get(nr_magazynu).dodaj_produkt(Produkty.get(nr_produktu), sztuk);
                            else System.out.println("Produkt juz na liscie");
                        }
                    }
                    break;
                }
                case 6:
                {
                    int nr;
                    System.out.println("Podaj numer produktu, ktory chesz usunac: ");
                    nr = in.nextInt();
                    if(nr<0 || nr>=Produkty.size()) System.out.println("Nie ma produktu o takim numerze.");
                    else
                    {
                        int flaga=1;
                        for(int i=0;i<Magazyny.size();i++)
                        {
                            if(Magazyny.get(i).czy_na_liscie(Produkty.get(nr))) flaga=0;
                        } 
                        if(flaga == 1)
                        {
                            Produkty.remove(nr);
                        }
                        else System.out.println("Produkt jest w magazynie(aby go usunac nalezy go najpierw usunac z magazynu).");
                    }
                    break;
                }
                case 7:
		{
                    int nr;
                    System.out.println("Podaj numer magazynu, ktory chesz usunac: ");
                    nr = in.nextInt();
                    if(nr<0 || nr>=Magazyny.size()) System.out.println("Nie ma magazynu o takim numerze.");
                    else
                    {
                        Magazyny.remove(nr);
                    }
                    break;
		}
                case 8:
		{
                    int nr_produktu;
                    int nr_magazynu;
                    System.out.println("Podaj numer produktu, ktory chesz usunac: ");
                    nr_produktu = in.nextInt();
		    System.out.println("Podaj numer magazynu,z ktorego chesz usunac produkt: ");
                    nr_magazynu = in.nextInt();
                    if(nr_magazynu<0 || nr_magazynu>=Magazyny.size()) System.out.println("Nie ma magazynu o takim numerze.");
                    else
                    {
			if(nr_produktu<0 || nr_produktu>=Produkty.size()) System.out.println("Nie ma produktu o takim numerze.");
                        else
                        {
                            Magazyny.get(nr_magazynu).usun_produkt(Produkty.get(nr_produktu));
			}
                    }
                    break;	
                }
                case 9:
		{
                    int nr_produktu;
                    System.out.println("Podaj numer produktu, ktory chesz zapisac: ");
                    nr_produktu = in.nextInt();
                    if(nr_produktu<0 || nr_produktu>=Produkty.size()) System.out.println("Nie ma produktu o takim numerze.");
                    {
			Produkty.get(nr_produktu).zapisz_produkt();
                    }
                    break;	
		}
                case 10:
		{
                    int nr_produktu;
                    int nr_magazynu;
                    int liczba;
                    System.out.println("Podaj numer produktu, ktorego ilosc chesz zmienic: ");
                    nr_produktu = in.nextInt();
                    System.out.println("Podaj numer magazynu,w ktorym chesz zmienic ilosc produktu: ");
                    nr_magazynu = in.nextInt();
                    System.out.println("Podaj nowa ilosc produktu: ");
                    liczba = in.nextInt();
                    if(nr_magazynu<0 || nr_magazynu>=Magazyny.size()) System.out.println("Nie ma magazynu o takim numerze.");
                    else
                    {
                        if(nr_produktu<0 || nr_produktu>=Produkty.size()) System.out.println("Nie ma produktu o takim numerze.");
                        {
                            if(liczba>0)
                            {
				Magazyny.get(nr_magazynu).edytuj_ilosc(Produkty.get(nr_produktu), liczba);
                            }
			}
                    }
                    break;
                }
                case 11:
                {
                    System.out.println("EXIT");
                    break;
                }
                default:
                {
                    System.out.println("Nie ma takiej opcji.");
                }
            }
              
          }
        
    }
    
}
