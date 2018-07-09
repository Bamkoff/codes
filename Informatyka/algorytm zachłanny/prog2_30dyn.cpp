//ogolny problem plecakowy - algorytm zachlanny
#include <iostream>
using namespace std;

void wczytaj (int *W, int *C, int n) {
	cout << "Podaj wartosci (8,3,1,2,1)\n";
	cout << "        i wagi (4,2,1,3,7) przedmiotow\n";
	for (int i=1; i<=n; i++) {
		cout << i << ".   wartosc = ";
		cin  >> W[i];
		cout << "        waga = ";
		cin  >> C[i];
	}
}

int pakujPlecak (int *W, int *C, int n, int waga, int *K) {
	int wynik=0;
	for (int i=1; i<=n; i++) {
		K[i]=waga/C[i];
		waga-=K[i]*C[i];
		wynik+=W[i]*K[i];
	}
	return wynik;
}

int main () {
	int waga, n;
	cout << "Liczba typow przedmiotow  (5) : ";
	cin  >> n;
	
	int *W = new int [n];  // = {8,3,1,2,1};
	int *C = new int [n];  // = {4,2,1,3,7};
	int *K = new int [n];  // = {4,2,1,3,7};
 
	cout << "Maksymalna waga plecaka  (11) : ";
	cin  >> waga;
 
	wczytaj(W,C,n);
 
	cout << "\nWartosc plecaka = " << pakujPlecak(W,C,n,waga,K) << endl;
	cout << "\nZapakowane przedmioty:" << endl;
	
	for (int i=1; i<=n; i++)
		cout <<  i<< ":  ilosc=" << K[i] << "  wartosc=" << W[i] << "  waga=" << C[i] << endl;
		
	system("pause");
	return 0;
}
