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
public class PC extends Produkt{
    String producent;
    String model;
    int szybkosc;
    int cena;
    public PC(String p, String m, int sz, int c)
    {
        producent = p;
        model = m;
        szybkosc = sz;
        cena = c;
    }
    @Override
    public void wyswietl_produkt()
    {
           System.out.print("*PC*         producent: " + producent + ", model: "
                   + model + ",  szybkosc: " + szybkosc + ", cena: " + cena);
    }

    /**
     *
     * @throws java.io.FileNotFoundException
     */
    @Override
    public void zapisz_produkt() throws FileNotFoundException
    {
        try (PrintWriter zapis = new PrintWriter(new FileOutputStream(new File("PC.txt"), true))) {
            zapis.append(producent + ":" + model + ":" + szybkosc + ":" + cena + ":");
            zapis.close();
        }
    }
}
