#include <iostream>
using namespace std;

// funkcja, kt�ra zatrzymuje program po wy�wietleniu wynik�w
// p1,p2      - ten zakres punkt�w zosta� zrobiony
// void oznacza, �e funkcja nie zwraca �adnej warto�ci
// przyk�ad u�ycia funkcji:  zatrzymanie(23,0,"");
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
  
//  1. Zadeklaruj dwie zmienne typu int i nadaj im warto�ci pocz�tkowe 65 i 66

       int n1=65, n2=66;

//  2. Wy�wietl obie liczby.

       cout << "liczba n1     " << n1 << "\n";
       cout << "liczba n2     " << n2 << "\n";

/*----------*/ zatrzymanie(1,2,"Liczby n1,n2"); /*--------------------*/

//  3. Zadeklaruj dwie zmienne znakowe.

       char z1, z2;

//  4. Przypisz im warto�ci zmiennych liczbowych zadeklarowanych przed chwil�.

       z1 = n1;
       z2 = n2;
     
//  5. Wy�wietl warto�ci zmiennych znakowych.

       cout << "znak z1       " << z1 << "\n";
       cout << "znak z2       " << z2 << "\n";

/*----------*/ zatrzymanie(3,5,"Znak <- Liczba"); /*--------------------*/
   
//  6. Zr�b to samo, co w 4. 5. ale zmiennym znakowym przypisz warto�ci "zrzutowane"
//     czyli np. z=(char)liczba;

       z1 = (char)69; 
       z2 = (char)72;
       
       cout << "znak z1       " << z1 << "\n";
       cout << "znak z2       " << z2 << "\n";
   
/*----------*/ zatrzymanie(6,0,"(char) rzutowanie"); /*--------------------*/
   
//  7. Teraz powt�rz punkty 1-6, ale w ten spos�b, �e pocz�tkowe s� znaki,
//     a liczby otrzymuj� warto�ci od nich (bez deklaracji, bo ju� s�).

       z1 = 'X';
       z2 = 'Y';
       
       cout << "znak z1       " << z1 << "\n";
       cout << "znak z2       " << z2 << "\n";
        
       n1 = z1;
       n2 = z2;
       
       cout << "liczba n1     " << n1 << "\n";
       cout << "liczba n2     " << n2 << "\n";

/*----------*/ zatrzymanie(7,0,"Liczba <- Znak"); /*--------------------*/
   
//  8. Zadeklaruj wska�nik do zmiennej typu int

       int* ws1;
  
//  9. Zr�b referencj� do pierwszej liczby, czyli wska�nikowi przypisz adres.

       ws1 = &n1;
   
// 10. Wy�wietl referencj�.

       cout << "ref1          " << &n1 << "\n";
   
// 11. Wy�wietl wska�nik.

       cout << "ws1           " << ws1 << "\n";
   
// 12. Wy�wietl liczb� za pomoc� wska�nika.

       cout << "*ws1          " << *ws1 << "\n";

/*----------*/ zatrzymanie(8,12,"Referencja,wskaznik,dereferencja"); /*--------------------*/

// 13. Punkty 9-12 powt�rz dla drugiej liczby, u�yj tego samego wska�nika.

       ws1 = &n2;
       cout << "ref2          " << &n2 << "\n";
       cout << "ws1           " << ws1 << "\n";
       cout << "*ws1          " << *ws1 << "\n";

/*----------*/ zatrzymanie(13,0,"Ref,ws,deref dla n2"); /*--------------------*/

// 14. Zr�b drugi wska�nik typu int
       int* ws2;

// 15. Wska�nikowi przypisz wska�nik pierwszy.

       ws2 = ws1;

// 16. Wy�wietl wska�niki pierwszy i drugi.

       cout << "ws1           " << ws1 << "\n";
       cout << "ws2           " << ws2 << "\n";

// 17. W miejsce wskazane przez drugi wska�nik wpisz warto�� wskazan� przez pierwszy.

       *ws2 = *ws1;

// 18. Wy�wietl warto��, kt�r� teraz wskazuje drugi wska�nik.

       cout << "*ws2          " << *ws2 << "\n";
   
/*----------*/ zatrzymanie(14,18,"*ws2 = *ws1;"); /*--------------------*/

// 19. Zadeklaruj tablic� i zapocz�tkuj j� �a�cuchem �ABXDE�

       char t[] = "ABXDE";

// 20. Zr�b wska�nik pokazuj�cy na znak.

       char* wz;
  
// 21. Przypisz mu adres tablicy.

       wz = t;

// 22. Wy�wietl wska�nik (poprzednio wy�wietli� si� adres, a teraz?)

       cout << "wz            " << wz << "\n";
  
/*----------*/ zatrzymanie(19,22,"t[] = ABXDE"); /*--------------------*/

// 23. Wy�wietl dwa adresy na elementy tablicy, czyli t oraz t+2
//     a nast�pnie warto�ci wskazywane na dwa sposoby: *(t+2) oraz *t+2
//     Powt�rz to samo za pomoc� wska�nika, kt�ry jest ustawiony na tablic�.
//     Dodatkowo wy�wietl warto�� *wz+2 jako znak.

       cout << "t             " << t       << "\n";
       cout << "t+2           " << t+2     << "\n";
       cout << "*(t+2)        " << *(t+2)  << "\n";
       cout << "*t+2          " << *t+2    << "\n";
       
       cout << "wz            " << wz      << "\n";
       cout << "wz+2          " << wz+2    << "\n";
       cout << "*(wz+2)       " << *(wz+2) << "\n";
       cout << "*wz+2         " << *wz+2   << "\n";
       cout << "char(*wz+2)   " << char(*wz+2) << "\n";
       
// 24. Wg punktu 21 nasz wska�nik jest adresem tablicy, dlatego mo�na pisa� np. wsk[3].
//     Wy�wietl ostatni element tablicy za pomoc� wska�nika.
//     Wielko�� tablicy to ost=sizeof(t); czyli 6, ��cznie ze znacznikiem ko�ca �a�cucha,
//     ale numeracja jest od zera.

       int ost = sizeof(t)-2;
       cout << "wz[ost]       " << wz[ost] << "\n";
       
/*----------*/ zatrzymanie(23,24,"Wskazniki na elementy t[]"); /*--------------------*/
 
// 25. Utw�rz wska�nik bez typu, czyli void

       void *wx;
  
// 26. Przypisz mu referencj� do pierwszej liczby.

       wx = &n1;
  
// 27. Wy�wietl warto�� wskazan� przez wska�nik.
//     Wska�nik jest bez typu, wi�c "nie wie" co widzi.
//     Dlatego trzeba mu to powiedzie�, czyli rzutowa� na wska�nik typu (char*)

       cout << "*wx           " << (char*)wx << "\n";
  
/*----------*/ zatrzymanie(25,27,"Wskaznik void i rzutowanie (char*)"); /*--------------------*/
 
// 28. Zadeklaruj znak

       char zx;

// 29. Przypisz mu warto�� liczby z pkt.1 za pomoc� rzutowania.

       zx = (char)n1;
  
// 30. Wy�wietl znak.

       cout << "znak zx       " << zx << "\n";

// 31. Zadeklaruj trzy liczby, pierwszej nadaj warto�� pocz�tkow�.

       int m1=70, m2, m3;
  

// 32. Drugiej liczbie nadaj warto�� liczby pierwszej.

       m2 = m1;
 
// 33. Trzeciej liczbie nadaj warto�� poprzez referencj� do liczby pierwszej.
//     Najpierw trzeba utworzy� wska�nik i nada� mu adres.

       int* ws = &m1;
       m3 = *ws;
  
// 34. Wy�wietl te trzy liczby.

       cout << "m1,m2,m3      " << m1 << " " << m2 << " " << m3 << "\n";

/*----------*/ zatrzymanie(28,34,"Trzy liczby m1,m2,m3"); /*--------------------*/
 
// 35. Zadeklaruj tablic� 5 liczb typu int

       int tab[5];
   
// 36. Zadeklaruj wska�nik do liczby int

       int *wt;
   
// 37. Wska�nikowi przypisz adres tablicy (od teraz wska�nik jest tablic�)
//     i w miejsce wskazywane przez wska�nik wstaw 65

       wt  = tab;
       *wt = 65;
   
// 38. Zwi�ksz wska�nik o 1 i w miejsce, kt�re teraz wskazuje wpisz 66

       wt++;
       *wt = 66;
   
// 39. Wska�nikowi przypisz referencj� do elementu [2] tablicy
//     i w miejsce, kt�re teraz wskazuje wpisz 67

       wt  = &tab[2];
       *wt = 67;
   
// 40. Wska�nikowi przypisz warto�� adresu tablicy zwi�kszonego o 3
//     i w miejsce, kt�re teraz wskazuje wpisz 68

       wt  = tab+3;
       *wt = 68;
   
// 41. W miejsce wskazywane przez (tab+4) wpisz 69

       *(tab+4) = 69;
   
// 42. Wy�wietl zawarto�� tablicy: tradycyjnie za pomoc� p�tli, jako tab[i]
//     Wiemy, �e tablica ma wymiar 5, ale oblicz to korzystaj�c z sizeof i wy�wietl.

       int d = sizeof(tab) / sizeof(int);
       cout << "d             " << d << "\n";
       
       cout << "tab[]         ";
       for(int i=0; i<d; i++) {
         cout << tab[i] << " ";
       }
       cout << "\n";
        
// 43. Wska�nikowi zn�w nadaj adres tablicy.

       wt = tab;
  
// 44. Wy�wietl zawarto�� tablicy: elementy traktuj jako wt[i]

       cout << "wt[]          ";
       for(int i=0; i<d; i++)
         cout << wt[i] << " ";
       cout << "\n";
        
// 45. Wy�wietl zawarto�� tablicy.
//     W p�tli nadaj wska�nikowi referencj� do kolejnego elementu
//     i wy�wietlaj wskazane warto�ci.

       cout << "wt=&tab[]     ";
       for(int i=0; i<d; i++) {
         wt = &tab[i];
         cout << *wt << " ";
       }
       cout << "\n";
 
// 46. Wy�wietl zawarto�� tablicy.
//     W p�tli przypisuj wska�nikowi adres tab+i ,
//     a nast�pnie wy�wietlaj wskazane warto�ci.

       cout << "wt=tab+i      ";
       for(int i=0; i<d; i++) {
         wt = tab+i;
         cout << *wt << " ";
       }
       cout << "\n";

// 47. Wy�wietl zawarto�� tablicy traktuj�c elementy jako *(wt+i)

       wt = tab;
       cout << "*(wt+i)       ";
       for(int i=0; i<d; i++)
         cout << *(wt+i) << " ";
       cout << "\n";
       
/*----------*/ zatrzymanie(35,47,"Wskazniki na tablice, wyswietlanie tablicy"); /*--------------------*/
 
} //=== Koniec MAIN === Koniec MAIN === Koniec MAIN === Koniec MAIN === Koniec MAIN



/*==============================================================================
Odpowiedz na pytania - do ka�dego napisz przyk�ad:

1. Kiedy i gdzie rezerwuje si� pami��/obszar do przechowania zmiennej?
   - w momencie deklarowania zmiennej, w pami�ci operacyjnej jest rezerwowany
     obszar tylu bajt�w, ile potrzebuje ta zmienna
     
2. Co to jest wska�nik, np. char* p;
   - zmienna wskazuj�ca (czyli obszar, czyli adres),
     czyli zwyk�a zmienna, kt�ra b�dzie zawiera�a warto�� typu adres
   
3. Co oznacza gwiazdka? (zale�y od tego, w kt�rym miejscu)
   - w deklaracji:  to jest zmienna wskazuj�ca
   - w instrukcji:  dereferencja, czyli wskazanie obszaru
   - w instrukcji po prawej stronie:  dereferencja, czyli pobranie warto�ci
   - w instrukcji po lewej stronie:   wskazuje na obszar
   
4. Czy wska�nik jest zmienn�? Dlaczego?
   - wskaznik to okre�lenie potoczne, skr�towe
   - w znaczeniu zmienna wskazuj�ca:  to patrz punkt 2.
   - w znaczeniu adres:               warto�� zmiennej wskazuj�cej
   
5. Czym jest w sensie typu (znakiem, liczb�, jak� liczb�, ... ?)
   - jest adresem (liczba szesnastkowa)
   
6. Co to jest referencja?
   - pobranie adresu zmiennej (nie ma obszaru w pami�ci, a wska�nik ma)
   
7. Co to jest dereferencja?
   - wybranie warto�ci wskazywanej przez zmienn� wskazuj�c�, np. *ws
   
8. Co to jest wy�uskanie?
   - j.w.
   
9. Czym r�ni si� gwiazdka w zapisie char* z;
   od gwiazdki w zapisie ch=*z;
   - char* z;   z jest zmienn� wskazuj�c�, typu char* (tzn. patrzy na znak)
   - ch=*z;     dereferencja, czyli wy�uskanie
   
10. Co to jest rzutowanie?
    - jawna konwersja typ�w (czasem jest niejawna, np. 1/2 , *wz+2)
    
11. Czym r�ni si� zapis  *(wsk+2) od zapisu *wsk+2
    - *(wsk+2)  wska�nik przesu� o 2 pozycje i pobierz stamt�d warto��
    - *wsk+2    we� warto�� wskazan� i do niej dodaj 2

12. Czym r�ni� si� zapisy  *wsk++;  *(wsk++);  (*wsk)++
    - *wsk++;   
    - *(wsk++); 
    - (*wsk)++  

13. Mamy char tz[255]; Czym jest warto�� tz?
    - adresem (bo nazwa tablicy jest jej adresem)
    - char[]        cout rozumie tz jako ca�y �a�cuch
    - inne tablice  adres na pocz�tek tablicy

14. Mamy char tz[255]; Wymie� kilka sposob�w odwo�ania si� do elementu tz[1]
    - wg punkt�w 42-47

15. Pierwszy zapis:  int n1; ... int* w2=&n1;
    Opisz s�owami co jest po lewej i po prawej stronie w drugiej deklaracji int* w2=&n1;
    - wg punkt�w poprzednich

==============================================================================*/
