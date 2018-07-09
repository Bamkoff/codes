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
public class Drukarka extends Produkt {
    String producent;
    String model;
    String kolor;
    String typ;
    int cena;
    
    public Drukarka(String p, String m, String k, String t, int c)
    {
     producent = p;
     model = m;
     kolor = k;
     typ = t;
     cena = c;   
    }
    @Override
    public void wyswietl_produkt()
    {
           System.out.print("*Drukarka*   producent: " + producent + ", model: "
           + model + ",  kolor: " + kolor + ", typ: " + typ + ", cena: " + cena);
    }
    /**
     *
     * @throws java.io.FileNotFoundException
     */
    @Override
    public void zapisz_produkt() throws FileNotFoundException
    {
        try (PrintWriter zapis = new PrintWriter(new FileOutputStream(new File("Drukarka.txt"), true))) 
        {
            zapis.append(producent + ":" + model + ":" + kolor + ":" + typ + ":" + cena + ":");
            zapis.close();
        }
    }
}
