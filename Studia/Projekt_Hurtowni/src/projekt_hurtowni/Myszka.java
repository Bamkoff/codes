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
public class Myszka extends Produkt{
    String producent;
    String model;
    String typ;
    int czulosc;
    int cena;
    
    public Myszka(String p, String m, String t, int cz,  int c)
    {
     producent = p;
     model = m;
     czulosc = cz;
     typ = t;
     cena = c;   
    }
    
    @Override
    public void wyswietl_produkt()
    {
           System.out.print("*Myszka*     producent: " + producent + ", model: "
           + model + ",  czulosc: " + czulosc + ", typ: " + typ + ", cena: " + cena);
    }
     /**
     *
     * @throws java.io.FileNotFoundException
     */
    @Override
    public void zapisz_produkt() throws FileNotFoundException
    {
        try (PrintWriter zapis = new PrintWriter(new FileOutputStream(new File("Myszka.txt"), true))) {
            zapis.append(producent + ":" + model + ":" + czulosc + ":" + typ + ":" + cena + ":");
            zapis.close();
        }
    }
    
    
}
