#include <iostream>
using namespace std;

// funkcja, która zatrzymuje program po wyœwietleniu wyników
// p1,p2      - ten zakres punktów zosta³ zrobiony
// void oznacza, ¿e funkcja nie zwraca ¿adnej wartoœci
// przyk³ad u¿ycia funkcji:  zatrzymanie(23,0,"");
void zatrzymanie (int p1, int p2, string mess) {
  char a='(', b=')';
  cout << "-------------------------------------------------------------------------------\n";
  cout << "                 " << a << p1;
  if (p2>p1) cout << "-" << p2 << b; else cout << b << "  ";
  cout << (p1<10?" ":"") << (p2<10?" ":"");
  while (mess.length()<45) mess+=' ';
  cout << "  " << mess << "Enter...\n";
  cout << "-------------------------------------------------------------------------------\n";
  getchar();
}

/*=== MAIN === MAIN === MAIN === MAIN === MAIN === MAIN === MAIN === MAIN ===*/
int main () {
  
//  1. Zadeklaruj dwie zmienne typu int i nadaj im wartoœci pocz¹tkowe 65 i 66


//  2. Wyœwietl obie liczby.


/*----------*/ zatrzymanie(1,2,"Liczby n1,n2"); /*--------------------*/

//  3. Zadeklaruj dwie zmienne znakowe.


//  4. Przypisz im wartoœci zmiennych liczbowych zadeklarowanych przed chwil¹.

     
//  5. Wyœwietl wartoœci zmiennych znakowych.


/*----------*/ zatrzymanie(3,5,"Znak <- Liczba"); /*--------------------*/
   
//  6. Zrób to samo, co w 4. 5. ale zmiennym znakowym przypisz wartoœci "zrzutowane"
//     czyli np. z=(char)liczba;

   
/*----------*/ zatrzymanie(6,0,"(char) rzutowanie"); /*--------------------*/
   
//  7. Teraz powtórz punkty 1-6, ale w ten sposób, ¿e pocz¹tkowe s¹ znaki,
//     a liczby otrzymuj¹ wartoœci od nich (bez deklaracji, bo ju¿ s¹).


/*----------*/ zatrzymanie(7,0,"Liczba <- Znak"); /*--------------------*/
   
//  8. Zadeklaruj wskaŸnik do zmiennej typu int

  
//  9. Zrób referencjê do pierwszej liczby, czyli wskaŸnikowi przypisz adres.

   
// 10. Wyœwietl referencjê.

   
// 11. Wyœwietl wskaŸnik.

   
// 12. Wyœwietl liczbê za pomoc¹ wskaŸnika.


/*----------*/ zatrzymanie(8,12,"Referencja,wskaznik,dereferencja"); /*--------------------*/

// 13. Punkty 9-12 powtórz dla drugiej liczby, u¿yj tego samego wskaŸnika.


/*----------*/ zatrzymanie(13,0,"Ref,ws,deref dla n2"); /*--------------------*/

// 14. Zrób drugi wskaŸnik typu int


// 15. WskaŸnikowi przypisz wskaŸnik pierwszy.


// 16. Wyœwietl wskaŸniki pierwszy i drugi.


// 17. W miejsce wskazane przez drugi wskaŸnik wpisz wartoœæ wskazan¹ przez pierwszy.


// 18. Wyœwietl wartoœæ, któr¹ teraz wskazuje drugi wskaŸnik.

   
/*----------*/ zatrzymanie(14,18,"*ws2 = *ws1;"); /*--------------------*/

// 19. Zadeklaruj tablicê i zapocz¹tkuj j¹ ³añcuchem ”ABXDE”


// 20. Zrób wskaŸnik pokazuj¹cy na znak.

  
// 21. Przypisz mu adres tablicy.


// 22. Wyœwietl wskaŸnik (poprzednio wyœwietli³ siê adres, a teraz?)

  
/*----------*/ zatrzymanie(19,22,"t[] = ABXDE"); /*--------------------*/

// 23. Wyœwietl dwa adresy na elementy tablicy, czyli t oraz t+2
//     a nastêpnie wartoœci wskazywane na dwa sposoby: *(t+2) oraz *t+2
//     Powtórz to samo za pomoc¹ wskaŸnika, który jest ustawiony na tablicê.
//     Dodatkowo wyœwietl wartoœæ *wz+2 jako znak.

       
// 24. Wg punktu 21 nasz wskaŸnik jest adresem tablicy, dlatego mo¿na pisaæ np. wsk[3].
//     Wyœwietl ostatni element tablicy za pomoc¹ wskaŸnika.
//     Wielkoœæ tablicy to ost=sizeof(t); czyli 6, ³¹cznie ze znacznikiem koñca ³añcucha,
//     ale numeracja jest od zera.

       
/*----------*/ zatrzymanie(23,24,"Wskazniki na elementy t[]"); /*--------------------*/
 
// 25. Utwórz wskaŸnik bez typu, czyli void

  
// 26. Przypisz mu referencjê do pierwszej liczby.

  
// 27. Wyœwietl wartoœæ wskazan¹ przez wskaŸnik.
//     WskaŸnik jest bez typu, wiêc "nie wie" co widzi.
//     Dlatego trzeba mu to powiedzieæ, czyli rzutowaæ na wskaŸnik typu (char*)

  
/*----------*/ zatrzymanie(25,27,"Wskaznik void i rzutowanie (char*)"); /*--------------------*/
 
// 28. Zadeklaruj znak


// 29. Przypisz mu wartoœæ liczby z pkt.1 za pomoc¹ rzutowania.

  
// 30. Wyœwietl znak.


// 31. Zadeklaruj trzy liczby, pierwszej nadaj wartoœæ pocz¹tkow¹.

  

// 32. Drugiej liczbie nadaj wartoœæ liczby pierwszej.

 
// 33. Trzeciej liczbie nadaj wartoœæ poprzez referencjê do liczby pierwszej.
//     Najpierw trzeba utworzyæ wskaŸnik i nadaæ mu adres.

  
// 34. Wyœwietl te trzy liczby.


/*----------*/ zatrzymanie(28,34,"Trzy liczby m1,m2,m3"); /*--------------------*/
 
// 35. Zadeklaruj tablicê 5 liczb typu int

   
// 36. Zadeklaruj wskaŸnik do liczby int

   
// 37. WskaŸnikowi przypisz adres tablicy (od teraz wskaŸnik jest tablic¹)
//     i w miejsce wskazywane przez wskaŸnik wstaw 65

   
// 38. Zwiêksz wskaŸnik o 1 i w miejsce, które teraz wskazuje wpisz 66

   
// 39. WskaŸnikowi przypisz referencjê do elementu [2] tablicy
//     i w miejsce, które teraz wskazuje wpisz 67

   
// 40. WskaŸnikowi przypisz wartoœæ adresu tablicy zwiêkszonego o 3
//     i w miejsce, które teraz wskazuje wpisz 68

   
// 41. W miejsce wskazywane przez (tab+4) wpisz 69

   
// 42. Wyœwietl zawartoœæ tablicy: tradycyjnie za pomoc¹ pêtli, jako tab[i]
//     Wiemy, ¿e tablica ma wymiar 5, ale oblicz to korzystaj¹c z sizeof i wyœwietl.

        
// 43. WskaŸnikowi znów nadaj adres tablicy.

  
// 44. Wyœwietl zawartoœæ tablicy: elementy traktuj jako wt[i]

        
// 45. Wyœwietl zawartoœæ tablicy.
//     W pêtli nadaj wskaŸnikowi referencjê do kolejnego elementu
//     i wyœwietlaj wskazane wartoœci.

 
// 46. Wyœwietl zawartoœæ tablicy.
//     W pêtli przypisuj wskaŸnikowi adres tab+i ,
//     a nastêpnie wyœwietlaj wskazane wartoœci.


// 47. Wyœwietl zawartoœæ tablicy traktuj¹c elementy jako *(wt+i)

       
/*----------*/ zatrzymanie(35,47,"Wskazniki na tablice, wyswietlanie tablicy"); /*--------------------*/
 
} //=== Koniec MAIN === Koniec MAIN === Koniec MAIN === Koniec MAIN === Koniec MAIN



/*==============================================================================
Odpowiedz na pytania - do ka¿dego napisz przyk³ad:

1. Kiedy i gdzie rezerwuje siê pamiêæ/obszar do przechowania zmiennej?
   - 
     
2. Co to jest wskaŸnik, np. char* p;
   - 
   
3. Co oznacza gwiazdka? (zale¿y od tego, w którym miejscu)
   - 
   
4. Czy wskaŸnik jest zmienn¹? Dlaczego?
   - 
   
5. Czym jest w sensie typu (znakiem, liczb¹, jak¹ liczb¹, ... ?)
   - 
   
6. Co to jest referencja?
   - 
   
7. Co to jest dereferencja?
   - 
   
8. Co to jest wy³uskanie?
   - 
   
9. Czym ró¿ni siê gwiazdka w zapisie char* z;
   od gwiazdki w zapisie ch=*z;
   - 
   
10. Co to jest rzutowanie?
    - 
    
11. Czym ró¿ni siê zapis  *(wsk+2) od zapisu *wsk+2
    - 

12. Czym ró¿ni¹ siê zapisy  *wsk++;  *(wsk++);  (*wsk)++
    -  

13. Mamy char tz[255]; Czym jest wartoœæ tz?
    - 

14. Mamy char tz[255]; Wymieñ kilka sposobów odwo³ania siê do elementu tz[1]
    - 

15. Pierwszy zapis:  int n1; ... int* w2=&n1;
    Opisz s³owami co jest po lewej i po prawej stronie w drugiej deklaracji int* w2=&n1;
    - 

==============================================================================*/
