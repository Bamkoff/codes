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

       int n1=65, n2=66;

//  2. Wyœwietl obie liczby.

       cout << "liczba n1     " << n1 << "\n";
       cout << "liczba n2     " << n2 << "\n";

/*----------*/ zatrzymanie(1,2,"Liczby n1,n2"); /*--------------------*/

//  3. Zadeklaruj dwie zmienne znakowe.

       char z1, z2;

//  4. Przypisz im wartoœci zmiennych liczbowych zadeklarowanych przed chwil¹.

       z1 = n1;
       z2 = n2;
     
//  5. Wyœwietl wartoœci zmiennych znakowych.

       cout << "znak z1       " << z1 << "\n";
       cout << "znak z2       " << z2 << "\n";

/*----------*/ zatrzymanie(3,5,"Znak <- Liczba"); /*--------------------*/
   
//  6. Zrób to samo, co w 4. 5. ale zmiennym znakowym przypisz wartoœci "zrzutowane"
//     czyli np. z=(char)liczba;

       z1 = (char)69; 
       z2 = (char)72;
       
       cout << "znak z1       " << z1 << "\n";
       cout << "znak z2       " << z2 << "\n";
   
/*----------*/ zatrzymanie(6,0,"(char) rzutowanie"); /*--------------------*/
   
//  7. Teraz powtórz punkty 1-6, ale w ten sposób, ¿e pocz¹tkowe s¹ znaki,
//     a liczby otrzymuj¹ wartoœci od nich (bez deklaracji, bo ju¿ s¹).

       z1 = 'X';
       z2 = 'Y';
       
       cout << "znak z1       " << z1 << "\n";
       cout << "znak z2       " << z2 << "\n";
        
       n1 = z1;
       n2 = z2;
       
       cout << "liczba n1     " << n1 << "\n";
       cout << "liczba n2     " << n2 << "\n";

/*----------*/ zatrzymanie(7,0,"Liczba <- Znak"); /*--------------------*/
   
//  8. Zadeklaruj wskaŸnik do zmiennej typu int

       int* ws1;
  
//  9. Zrób referencjê do pierwszej liczby, czyli wskaŸnikowi przypisz adres.

       ws1 = &n1;
   
// 10. Wyœwietl referencjê.

       cout << "ref1          " << &n1 << "\n";
   
// 11. Wyœwietl wskaŸnik.

       cout << "ws1           " << ws1 << "\n";
   
// 12. Wyœwietl liczbê za pomoc¹ wskaŸnika.

       cout << "*ws1          " << *ws1 << "\n";

/*----------*/ zatrzymanie(8,12,"Referencja,wskaznik,dereferencja"); /*--------------------*/

// 13. Punkty 9-12 powtórz dla drugiej liczby, u¿yj tego samego wskaŸnika.

       ws1 = &n2;
       cout << "ref2          " << &n2 << "\n";
       cout << "ws1           " << ws1 << "\n";
       cout << "*ws1          " << *ws1 << "\n";

/*----------*/ zatrzymanie(13,0,"Ref,ws,deref dla n2"); /*--------------------*/

// 14. Zrób drugi wskaŸnik typu int
       int* ws2;

// 15. WskaŸnikowi przypisz wskaŸnik pierwszy.

       ws2 = ws1;

// 16. Wyœwietl wskaŸniki pierwszy i drugi.

       cout << "ws1           " << ws1 << "\n";
       cout << "ws2           " << ws2 << "\n";

// 17. W miejsce wskazane przez drugi wskaŸnik wpisz wartoœæ wskazan¹ przez pierwszy.

       *ws2 = *ws1;

// 18. Wyœwietl wartoœæ, któr¹ teraz wskazuje drugi wskaŸnik.

       cout << "*ws2          " << *ws2 << "\n";
   
/*----------*/ zatrzymanie(14,18,"*ws2 = *ws1;"); /*--------------------*/

// 19. Zadeklaruj tablicê i zapocz¹tkuj j¹ ³añcuchem ”ABXDE”

       char t[] = "ABXDE";

// 20. Zrób wskaŸnik pokazuj¹cy na znak.

       char* wz;
  
// 21. Przypisz mu adres tablicy.

       wz = t;

// 22. Wyœwietl wskaŸnik (poprzednio wyœwietli³ siê adres, a teraz?)

       cout << "wz            " << wz << "\n";
  
/*----------*/ zatrzymanie(19,22,"t[] = ABXDE"); /*--------------------*/

// 23. Wyœwietl dwa adresy na elementy tablicy, czyli t oraz t+2
//     a nastêpnie wartoœci wskazywane na dwa sposoby: *(t+2) oraz *t+2
//     Powtórz to samo za pomoc¹ wskaŸnika, który jest ustawiony na tablicê.
//     Dodatkowo wyœwietl wartoœæ *wz+2 jako znak.

       cout << "t             " << t       << "\n";
       cout << "t+2           " << t+2     << "\n";
       cout << "*(t+2)        " << *(t+2)  << "\n";
       cout << "*t+2          " << *t+2    << "\n";
       
       cout << "wz            " << wz      << "\n";
       cout << "wz+2          " << wz+2    << "\n";
       cout << "*(wz+2)       " << *(wz+2) << "\n";
       cout << "*wz+2         " << *wz+2   << "\n";
       cout << "char(*wz+2)   " << char(*wz+2) << "\n";
       
// 24. Wg punktu 21 nasz wskaŸnik jest adresem tablicy, dlatego mo¿na pisaæ np. wsk[3].
//     Wyœwietl ostatni element tablicy za pomoc¹ wskaŸnika.
//     Wielkoœæ tablicy to ost=sizeof(t); czyli 6, ³¹cznie ze znacznikiem koñca ³añcucha,
//     ale numeracja jest od zera.

       int ost = sizeof(t)-2;
       cout << "wz[ost]       " << wz[ost] << "\n";
       
/*----------*/ zatrzymanie(23,24,"Wskazniki na elementy t[]"); /*--------------------*/
 
// 25. Utwórz wskaŸnik bez typu, czyli void

       void *wx;
  
// 26. Przypisz mu referencjê do pierwszej liczby.

       wx = &n1;
  
// 27. Wyœwietl wartoœæ wskazan¹ przez wskaŸnik.
//     WskaŸnik jest bez typu, wiêc "nie wie" co widzi.
//     Dlatego trzeba mu to powiedzieæ, czyli rzutowaæ na wskaŸnik typu (char*)

       cout << "*wx           " << (char*)wx << "\n";
  
/*----------*/ zatrzymanie(25,27,"Wskaznik void i rzutowanie (char*)"); /*--------------------*/
 
// 28. Zadeklaruj znak

       char zx;

// 29. Przypisz mu wartoœæ liczby z pkt.1 za pomoc¹ rzutowania.

       zx = (char)n1;
  
// 30. Wyœwietl znak.

       cout << "znak zx       " << zx << "\n";

// 31. Zadeklaruj trzy liczby, pierwszej nadaj wartoœæ pocz¹tkow¹.

       int m1=70, m2, m3;
  

// 32. Drugiej liczbie nadaj wartoœæ liczby pierwszej.

       m2 = m1;
 
// 33. Trzeciej liczbie nadaj wartoœæ poprzez referencjê do liczby pierwszej.
//     Najpierw trzeba utworzyæ wskaŸnik i nadaæ mu adres.

       int* ws = &m1;
       m3 = *ws;
  
// 34. Wyœwietl te trzy liczby.

       cout << "m1,m2,m3      " << m1 << " " << m2 << " " << m3 << "\n";

/*----------*/ zatrzymanie(28,34,"Trzy liczby m1,m2,m3"); /*--------------------*/
 
// 35. Zadeklaruj tablicê 5 liczb typu int

       int tab[5];
   
// 36. Zadeklaruj wskaŸnik do liczby int

       int *wt;
   
// 37. WskaŸnikowi przypisz adres tablicy (od teraz wskaŸnik jest tablic¹)
//     i w miejsce wskazywane przez wskaŸnik wstaw 65

       wt  = tab;
       *wt = 65;
   
// 38. Zwiêksz wskaŸnik o 1 i w miejsce, które teraz wskazuje wpisz 66

       wt++;
       *wt = 66;
   
// 39. WskaŸnikowi przypisz referencjê do elementu [2] tablicy
//     i w miejsce, które teraz wskazuje wpisz 67

       wt  = &tab[2];
       *wt = 67;
   
// 40. WskaŸnikowi przypisz wartoœæ adresu tablicy zwiêkszonego o 3
//     i w miejsce, które teraz wskazuje wpisz 68

       wt  = tab+3;
       *wt = 68;
   
// 41. W miejsce wskazywane przez (tab+4) wpisz 69

       *(tab+4) = 69;
   
// 42. Wyœwietl zawartoœæ tablicy: tradycyjnie za pomoc¹ pêtli, jako tab[i]
//     Wiemy, ¿e tablica ma wymiar 5, ale oblicz to korzystaj¹c z sizeof i wyœwietl.

       int d = sizeof(tab) / sizeof(int);
       cout << "d             " << d << "\n";
       
       cout << "tab[]         ";
       for(int i=0; i<d; i++) {
         cout << tab[i] << " ";
       }
       cout << "\n";
        
// 43. WskaŸnikowi znów nadaj adres tablicy.

       wt = tab;
  
// 44. Wyœwietl zawartoœæ tablicy: elementy traktuj jako wt[i]

       cout << "wt[]          ";
       for(int i=0; i<d; i++)
         cout << wt[i] << " ";
       cout << "\n";
        
// 45. Wyœwietl zawartoœæ tablicy.
//     W pêtli nadaj wskaŸnikowi referencjê do kolejnego elementu
//     i wyœwietlaj wskazane wartoœci.

       cout << "wt=&tab[]     ";
       for(int i=0; i<d; i++) {
         wt = &tab[i];
         cout << *wt << " ";
       }
       cout << "\n";
 
// 46. Wyœwietl zawartoœæ tablicy.
//     W pêtli przypisuj wskaŸnikowi adres tab+i ,
//     a nastêpnie wyœwietlaj wskazane wartoœci.

       cout << "wt=tab+i      ";
       for(int i=0; i<d; i++) {
         wt = tab+i;
         cout << *wt << " ";
       }
       cout << "\n";

// 47. Wyœwietl zawartoœæ tablicy traktuj¹c elementy jako *(wt+i)

       wt = tab;
       cout << "*(wt+i)       ";
       for(int i=0; i<d; i++)
         cout << *(wt+i) << " ";
       cout << "\n";
       
/*----------*/ zatrzymanie(35,47,"Wskazniki na tablice, wyswietlanie tablicy"); /*--------------------*/
 
} //=== Koniec MAIN === Koniec MAIN === Koniec MAIN === Koniec MAIN === Koniec MAIN



/*==============================================================================
Odpowiedz na pytania - do ka¿dego napisz przyk³ad:

1. Kiedy i gdzie rezerwuje siê pamiêæ/obszar do przechowania zmiennej?
   - w momencie deklarowania zmiennej, w pamiêci operacyjnej jest rezerwowany
     obszar tylu bajtów, ile potrzebuje ta zmienna
     
2. Co to jest wskaŸnik, np. char* p;
   - zmienna wskazuj¹ca (czyli obszar, czyli adres),
     czyli zwyk³a zmienna, która bêdzie zawiera³a wartoœæ typu adres
   
3. Co oznacza gwiazdka? (zale¿y od tego, w którym miejscu)
   - w deklaracji:  to jest zmienna wskazuj¹ca
   - w instrukcji:  dereferencja, czyli wskazanie obszaru
   - w instrukcji po prawej stronie:  dereferencja, czyli pobranie wartoœci
   - w instrukcji po lewej stronie:   wskazuje na obszar
   
4. Czy wskaŸnik jest zmienn¹? Dlaczego?
   - wskaznik to okreœlenie potoczne, skrótowe
   - w znaczeniu zmienna wskazuj¹ca:  to patrz punkt 2.
   - w znaczeniu adres:               wartoœæ zmiennej wskazuj¹cej
   
5. Czym jest w sensie typu (znakiem, liczb¹, jak¹ liczb¹, ... ?)
   - jest adresem (liczba szesnastkowa)
   
6. Co to jest referencja?
   - pobranie adresu zmiennej (nie ma obszaru w pamiêci, a wskaŸnik ma)
   
7. Co to jest dereferencja?
   - wybranie wartoœci wskazywanej przez zmienn¹ wskazuj¹c¹, np. *ws
   
8. Co to jest wy³uskanie?
   - j.w.
   
9. Czym ró¿ni siê gwiazdka w zapisie char* z;
   od gwiazdki w zapisie ch=*z;
   - char* z;   z jest zmienn¹ wskazuj¹c¹, typu char* (tzn. patrzy na znak)
   - ch=*z;     dereferencja, czyli wy³uskanie
   
10. Co to jest rzutowanie?
    - jawna konwersja typów (czasem jest niejawna, np. 1/2 , *wz+2)
    
11. Czym ró¿ni siê zapis  *(wsk+2) od zapisu *wsk+2
    - *(wsk+2)  wskaŸnik przesuñ o 2 pozycje i pobierz stamt¹d wartoœæ
    - *wsk+2    we¿ wartoœæ wskazan¹ i do niej dodaj 2

12. Czym ró¿ni¹ siê zapisy  *wsk++;  *(wsk++);  (*wsk)++
    - *wsk++;   
    - *(wsk++); 
    - (*wsk)++  

13. Mamy char tz[255]; Czym jest wartoœæ tz?
    - adresem (bo nazwa tablicy jest jej adresem)
    - char[]        cout rozumie tz jako ca³y ³añcuch
    - inne tablice  adres na pocz¹tek tablicy

14. Mamy char tz[255]; Wymieñ kilka sposobów odwo³ania siê do elementu tz[1]
    - wg punktów 42-47

15. Pierwszy zapis:  int n1; ... int* w2=&n1;
    Opisz s³owami co jest po lewej i po prawej stronie w drugiej deklaracji int* w2=&n1;
    - wg punktów poprzednich

==============================================================================*/
