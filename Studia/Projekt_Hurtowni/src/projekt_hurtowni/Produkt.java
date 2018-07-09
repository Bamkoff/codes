package projekt_hurtowni;

import java.io.*;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Bartek
 */
public abstract class Produkt {
    public abstract void wyswietl_produkt();
    public abstract void zapisz_produkt() throws FileNotFoundException; 
  }

