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


//  2. Wy�wietl obie liczby.


/*----------*/ zatrzymanie(1,2,"Liczby n1,n2"); /*--------------------*/

//  3. Zadeklaruj dwie zmienne znakowe.


//  4. Przypisz im warto�ci zmiennych liczbowych zadeklarowanych przed chwil�.

     
//  5. Wy�wietl warto�ci zmiennych znakowych.


/*----------*/ zatrzymanie(3,5,"Znak <- Liczba"); /*--------------------*/
   
//  6. Zr�b to samo, co w 4. 5. ale zmiennym znakowym przypisz warto�ci "zrzutowane"
//     czyli np. z=(char)liczba;

   
/*----------*/ zatrzymanie(6,0,"(char) rzutowanie"); /*--------------------*/
   
//  7. Teraz powt�rz punkty 1-6, ale w ten spos�b, �e pocz�tkowe s� znaki,
//     a liczby otrzymuj� warto�ci od nich (bez deklaracji, bo ju� s�).


/*----------*/ zatrzymanie(7,0,"Liczba <- Znak"); /*--------------------*/
   
//  8. Zadeklaruj wska�nik do zmiennej typu int

  
//  9. Zr�b referencj� do pierwszej liczby, czyli wska�nikowi przypisz adres.

   
// 10. Wy�wietl referencj�.

   
// 11. Wy�wietl wska�nik.

   
// 12. Wy�wietl liczb� za pomoc� wska�nika.


/*----------*/ zatrzymanie(8,12,"Referencja,wskaznik,dereferencja"); /*--------------------*/

// 13. Punkty 9-12 powt�rz dla drugiej liczby, u�yj tego samego wska�nika.


/*----------*/ zatrzymanie(13,0,"Ref,ws,deref dla n2"); /*--------------------*/

// 14. Zr�b drugi wska�nik typu int


// 15. Wska�nikowi przypisz wska�nik pierwszy.


// 16. Wy�wietl wska�niki pierwszy i drugi.


// 17. W miejsce wskazane przez drugi wska�nik wpisz warto�� wskazan� przez pierwszy.


// 18. Wy�wietl warto��, kt�r� teraz wskazuje drugi wska�nik.

   
/*----------*/ zatrzymanie(14,18,"*ws2 = *ws1;"); /*--------------------*/

// 19. Zadeklaruj tablic� i zapocz�tkuj j� �a�cuchem �ABXDE�


// 20. Zr�b wska�nik pokazuj�cy na znak.

  
// 21. Przypisz mu adres tablicy.


// 22. Wy�wietl wska�nik (poprzednio wy�wietli� si� adres, a teraz?)

  
/*----------*/ zatrzymanie(19,22,"t[] = ABXDE"); /*--------------------*/

// 23. Wy�wietl dwa adresy na elementy tablicy, czyli t oraz t+2
//     a nast�pnie warto�ci wskazywane na dwa sposoby: *(t+2) oraz *t+2
//     Powt�rz to samo za pomoc� wska�nika, kt�ry jest ustawiony na tablic�.
//     Dodatkowo wy�wietl warto�� *wz+2 jako znak.

       
// 24. Wg punktu 21 nasz wska�nik jest adresem tablicy, dlatego mo�na pisa� np. wsk[3].
//     Wy�wietl ostatni element tablicy za pomoc� wska�nika.
//     Wielko�� tablicy to ost=sizeof(t); czyli 6, ��cznie ze znacznikiem ko�ca �a�cucha,
//     ale numeracja jest od zera.

       
/*----------*/ zatrzymanie(23,24,"Wskazniki na elementy t[]"); /*--------------------*/
 
// 25. Utw�rz wska�nik bez typu, czyli void

  
// 26. Przypisz mu referencj� do pierwszej liczby.

  
// 27. Wy�wietl warto�� wskazan� przez wska�nik.
//     Wska�nik jest bez typu, wi�c "nie wie" co widzi.
//     Dlatego trzeba mu to powiedzie�, czyli rzutowa� na wska�nik typu (char*)

  
/*----------*/ zatrzymanie(25,27,"Wskaznik void i rzutowanie (char*)"); /*--------------------*/
 
// 28. Zadeklaruj znak


// 29. Przypisz mu warto�� liczby z pkt.1 za pomoc� rzutowania.

  
// 30. Wy�wietl znak.


// 31. Zadeklaruj trzy liczby, pierwszej nadaj warto�� pocz�tkow�.

  

// 32. Drugiej liczbie nadaj warto�� liczby pierwszej.

 
// 33. Trzeciej liczbie nadaj warto�� poprzez referencj� do liczby pierwszej.
//     Najpierw trzeba utworzy� wska�nik i nada� mu adres.

  
// 34. Wy�wietl te trzy liczby.


/*----------*/ zatrzymanie(28,34,"Trzy liczby m1,m2,m3"); /*--------------------*/
 
// 35. Zadeklaruj tablic� 5 liczb typu int

   
// 36. Zadeklaruj wska�nik do liczby int

   
// 37. Wska�nikowi przypisz adres tablicy (od teraz wska�nik jest tablic�)
//     i w miejsce wskazywane przez wska�nik wstaw 65

   
// 38. Zwi�ksz wska�nik o 1 i w miejsce, kt�re teraz wskazuje wpisz 66

   
// 39. Wska�nikowi przypisz referencj� do elementu [2] tablicy
//     i w miejsce, kt�re teraz wskazuje wpisz 67

   
// 40. Wska�nikowi przypisz warto�� adresu tablicy zwi�kszonego o 3
//     i w miejsce, kt�re teraz wskazuje wpisz 68

   
// 41. W miejsce wskazywane przez (tab+4) wpisz 69

   
// 42. Wy�wietl zawarto�� tablicy: tradycyjnie za pomoc� p�tli, jako tab[i]
//     Wiemy, �e tablica ma wymiar 5, ale oblicz to korzystaj�c z sizeof i wy�wietl.

        
// 43. Wska�nikowi zn�w nadaj adres tablicy.

  
// 44. Wy�wietl zawarto�� tablicy: elementy traktuj jako wt[i]

        
// 45. Wy�wietl zawarto�� tablicy.
//     W p�tli nadaj wska�nikowi referencj� do kolejnego elementu
//     i wy�wietlaj wskazane warto�ci.

 
// 46. Wy�wietl zawarto�� tablicy.
//     W p�tli przypisuj wska�nikowi adres tab+i ,
//     a nast�pnie wy�wietlaj wskazane warto�ci.


// 47. Wy�wietl zawarto�� tablicy traktuj�c elementy jako *(wt+i)

       
/*----------*/ zatrzymanie(35,47,"Wskazniki na tablice, wyswietlanie tablicy"); /*--------------------*/
 
} //=== Koniec MAIN === Koniec MAIN === Koniec MAIN === Koniec MAIN === Koniec MAIN



/*==============================================================================
Odpowiedz na pytania - do ka�dego napisz przyk�ad:

1. Kiedy i gdzie rezerwuje si� pami��/obszar do przechowania zmiennej?
   - 
     
2. Co to jest wska�nik, np. char* p;
   - 
   
3. Co oznacza gwiazdka? (zale�y od tego, w kt�rym miejscu)
   - 
   
4. Czy wska�nik jest zmienn�? Dlaczego?
   - 
   
5. Czym jest w sensie typu (znakiem, liczb�, jak� liczb�, ... ?)
   - 
   
6. Co to jest referencja?
   - 
   
7. Co to jest dereferencja?
   - 
   
8. Co to jest wy�uskanie?
   - 
   
9. Czym r�ni si� gwiazdka w zapisie char* z;
   od gwiazdki w zapisie ch=*z;
   - 
   
10. Co to jest rzutowanie?
    - 
    
11. Czym r�ni si� zapis  *(wsk+2) od zapisu *wsk+2
    - 

12. Czym r�ni� si� zapisy  *wsk++;  *(wsk++);  (*wsk)++
    -  

13. Mamy char tz[255]; Czym jest warto�� tz?
    - 

14. Mamy char tz[255]; Wymie� kilka sposob�w odwo�ania si� do elementu tz[1]
    - 

15. Pierwszy zapis:  int n1; ... int* w2=&n1;
    Opisz s�owami co jest po lewej i po prawej stronie w drugiej deklaracji int* w2=&n1;
    - 

==============================================================================*/
