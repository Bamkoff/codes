/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projekt_hurtowni;

import java.util.*;
/**
 *
 * @author Bartek
 */
public class Magazyn {
    String adres;
    List<Produkt> Produkty = new ArrayList<Produkt>();
    List<Integer> ilosci = new ArrayList<Integer>();
    /**
     *
     * @param n
     */
    public Magazyn(String n)
    {
        adres = n;
    }
    public void dodaj_produkt(Produkt p, int i)
    {
        if(czy_na_liscie(p))
            System.out.print("Obiekt juz w magazynie");
        else
        {
            Produkty.add(p);
            ilosci.add(i);
        }
    }
    public void usun_produkt(Produkt p)
    {
        if(czy_na_liscie(p))
        {
            int indeks = Produkty.indexOf(p);
            Produkty.remove(p);
            ilosci.remove(indeks);
        }
        else
        {
            System.out.print("Obiektu nie ma w magazynie");
        }
    }
    public void wyswietl_magazyn()
    {
        System.out.println("Adres Magazynu: " + adres);
        System.out.println("Produkty na liscie: ");
        int indeks = 0;
        while(indeks < Produkty.size())
        {
            Produkty.get(indeks).wyswietl_produkt();
            System.out.print(", ilosc: " + ilosci.get(indeks));
            System.out.println();
            indeks++;
        }
        
    }
    public Boolean czy_na_liscie(Produkt p)
    {
        return Produkty.indexOf(p) != -1;
    }
    public void edytuj_ilosc(Produkt p, int i)
    {
        if(czy_na_liscie(p))
        {
            int indeks = Produkty.indexOf(p);
            ilosci.set(indeks,i);
        }
        else System.out.print("Obiektu nie ma w magazynie");
    }
    
}
