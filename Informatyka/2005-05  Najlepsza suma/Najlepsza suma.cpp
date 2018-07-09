#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const string plik1 = "dane5-1.txt";
const string plik2 = "dane5-2.txt";
const string plik3 = "dane5-3.txt";
const string plik4 = "Raport5.txt";

const int xx = 0; // xx>0 zatrzymywane wyœwietlanie tablicy 

int maxPlik (string plik) {  // ile liczb jest w pliku
	ifstream f (&plik[0]);
	int m=0;
	string s;
  while (!f.eof()) {
    getline(f,s);
    if (f.eof()) break; else m++;
  }
 	f.close();
	return m;
}

void tabPlik (string plik, int *t) {  // przepisuje liczby z pliku do tablicy
	ifstream f (&plik[0]);              // wskaŸnik na pocz¹tek ³añcucha
	int m=0;
	string s;
  while (!f.eof()) {
    f >> t[m];
    if (f.eof()) break; else m++;
  }
 	f.close();
}

int najSuma (int *t, int m) {
  int j,k, naj=0, su;
  for (j=0; j<m; j++){
    su=0;
    for (k=j; k<m; k++){
      su+=t[k];
      //cout << su << endl;
      naj=(su>naj)?su:naj;   
    }
  }
	return naj;
}

void qsort (int *t, int p1, int p2) {
  int i,j,elt,z;                   // znaki deklarowane jako liczby
  i = (p1+p2)/2;                   // dziel i zwyciê¿aj, ten element to piwot,
                                   // seed, element osiowy lub po prostu wybrany element
  elt  = t[i];
  t[i] = t[p2];
	t[p2]=elt;
  for (i=j=p1; i<p2; i++)
    if (t[i] < elt) {
      z=t[i]; t[i]=t[j]; t[j]=z;   // swap(t[i],t[j]);
      j++;
    }
  t[p2] = t[j];
  t[j]  = elt;
  if (p1 < j-1) qsort(t,p1,j-1);
  if (j+1 < p2) qsort(t,j+1,p2);
}

void Pokaz (int *t, int m, int xx) {  // xx>0 zatrzymywane wyœwietlanie
	int j,stop;
	for (j=0; j<m; j++) {
		stop = xx>0 ? (j+1) % xx : 1;
		cout << j << ".  " << t[j] << "\n";
	  if (!stop && j<m-1) system("pause");
	}
}

int najPop (int *t, int m, int &mx) {
	mx = 1;                    // ile razy wystêpuje najpopularniejszy
	int p=0, px=p;             // na której pozycji jest najpopularniejszy
	int cz=1;                  // do liczenia czêstoœci poszczególnych liczb
	cout << "\n     j   t[j-1] t[j]  px    cz   mx \n";
  for (int j=1; j<m; j++){
	  if (t[j]!=t[j-1]) {      // gdy zmienia siê liczba, to dla t[j-1] policzono cz
	    if (cz>mx) {mx=cz; px=p;}
	    p=j; cz=1;
		}
		else cz++;
		cout << setw(6) << j << ".  " << setw(5) << t[j-1] << setw(5) << t[j]
		     << setw(5) << px << setw(5) << cz << setw(5) << mx << endl;
	}
	return px;
}

int main () {
  int naj;       // zmienna: najlepsza suma
	int px,mx,wx;  // zmienne: pozycja, czêstoœæ i wartoœæ najpopularniejszego
	
	ofstream f4 (&plik4[0], ios::trunc);
	
	int v1[4] = {1,2,-5,7};
  naj = najSuma(v1,4);
  cout << "Najlepsza suma {1,2,-5,7}  =  " << naj << "  (obl.kontrolne)\n";
  if (xx) system("pause"); 
	cout << "\n";
  
  int v2[10] = {1, -2, 2, 2, 2, -5, 3, 3, 1, -3};
  naj = najSuma(v2,10);
  cout << "Najlepsza suma {1, -2, 2, 2, 2, -5, 3, 3, 1, -3}  =  " << naj << "  (obl.kontrolne)\n";;
  if (xx) system("pause"); 
	cout << "\n";

  int v3[6] = {1, -2, 6, -5, 7, -3};
  naj = najSuma(v3,6);
  cout << "Najlepsza suma {1, -2, 6, -5, 7, -3}  =  " << naj << "\n";
  f4   << "Najlepsza suma {1, -2, 6, -5, 7, -3}  =  " << naj << "\n\n";
  if (xx) system("pause"); 
	cout << "\n";

	int m1 = maxPlik(plik1),  // sprawdzam, jaki wymiar tablicy muszê mieæ
	    m2 = maxPlik(plik2),  // ale mo¿na to po prostu zobaczyæ w Excelu
	    m3 = maxPlik(plik3);
  int N,j;
	N = m2>m1 ? m2 : m1;
  N = m3>N  ? m3 : N; 
  cout << m1 << "  " << m2 << "  " << m3 << "  " << N << "\n\n";
  
  int *t = new int [N];
  
//----- 1 --------------------------------------------- Najlepsza -------------
  tabPlik(plik1,t);
  Pokaz(t,m1,xx);
  naj = najSuma(t,m1);
  cout << "Najlepsza suma dla       " << plik1 << "  =  " << naj << "\n";
  f4   << "Najlepsza suma dla       " << plik1 << "  =  " << naj << "\n";
  if (xx) system("pause"); 
	cout << "\n";
  
//----- 111 ------------------------------------------- Najpopularniejsza -----
  qsort(t,0,m1-1);
  Pokaz(t,m1,xx);
  px=najPop(t,m1,mx);
  cout << "Najpopularniejszy dla    " << plik1 << "  =  " << t[px] << "   " << mx << "x\n\n";
  f4   << "Najpopularniejszy dla    " << plik1 << "  =  " << t[px] << "   " << mx << "x\n\n";
  if (xx) system("pause"); 
	cout << "\n";
  
//----- 222 ------------------------------------------- Najlepsza -------------
  tabPlik(plik2,t);
  Pokaz(t,m2,xx);
  naj = najSuma(t,m2);
  cout << "Najlepsza suma dla       " << plik2 << "  =  " << naj << "\n";
  f4   << "Najlepsza suma dla       " << plik2 << "  =  " << naj << "\n";
  if (xx) system("pause"); 
	cout << "\n";
  
//----- 222 ------------------------------------------- Najpopularniejsza -----
  qsort(t,0,m2-1);
  Pokaz(t,m2,xx);
  px=najPop(t,m2,mx);
  cout << "Najpopularniejszy dla    " << plik2 << "  =  " << t[px] << "   " << mx << "x\n\n";
  f4   << "Najpopularniejszy dla    " << plik2 << "  =  " << t[px] << "   " << mx << "x\n\n";
  if (xx) system("pause"); 
	cout << "\n";
  
//----- 333 ------------------------------------------- Najlepsza -------------
  tabPlik(plik3,t);
  Pokaz(t,m3,xx);
  naj = najSuma(t,m3);
  cout << "Najlepsza suma dla       " << plik3 << "  =  " << naj << "\n";
  f4   << "Najlepsza suma dla       " << plik3 << "  =  " << naj << "\n";
  if (xx) system("pause"); 
	cout << "\n";
  
//----- 333 ------------------------------------------- Najpopularniejsza -----
  qsort(t,0,m3-1);
  Pokaz(t,m3,xx);
  px=najPop(t,m3,mx);
  cout << "Najpopularniejszy dla    " << plik3 << "  =  " << t[px] << "   " << mx << "x\n\n";
  f4   << "Najpopularniejszy dla    " << plik3 << "  =  " << t[px] << "   " << mx << "x\n\n";
  if (xx) system("pause"); 
	cout << "\n";
	
	f4.close();
}
