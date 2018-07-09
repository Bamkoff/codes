/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projekt_hurtowni;
import java.io.*;
/**
 *
 * @author Bartek
 */
public class Telefon extends Produkt {
    String producent;
    String model;
    int szybkosc;
    int ekran;
    int bateria;
    int cena;
    public Telefon(String p, String m, int sz, int e, int b, int c)
    {
        producent = p;
        model = m;
        szybkosc = sz;
        ekran = e;
        bateria = b;
        cena = c;
    }
    @Override
    public void wyswietl_produkt()
    {
           System.out.print("*Telefon*    producent: " + producent + ", model: "
           + model + ",  szybkosc: " + szybkosc + ", ekran: " + ekran 
           + ", bateria: " + bateria + ", cena: " + cena);
    }
    /**
     *
     * @throws java.io.FileNotFoundException
     */
    @Override
    public void zapisz_produkt() throws FileNotFoundException
    {
        try (PrintWriter zapis = new PrintWriter(new FileOutputStream(new File("Telefon.txt"), true))) {
            zapis.append(producent + ":" + model + ":" + szybkosc + ":" + ekran + ":" + bateria + ":" + cena + ":");
            zapis.close();
        }
    }
}
