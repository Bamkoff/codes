//ogolny problem plecakowy - algorytm zachlanny
#include <iostream>
using namespace std;
const int MAX = 50;

void wczytaj (int W[], int C[], int n, int ilosc)
{
 cout<<"Podaj wzrosty i wagi :"<<endl;
 for (int i=1;i<=n;i++)
 {   
  cout<<i<<".   wzrost=";
  cin>>W[i];
  cout<<"     waga=";
  cin>>C[i];
  cout<<"ilosc="<< 
 }
}

int pakujPlecak (int W[], int C[], int n, int waga, int K[])
{
 int wynik=0;
 for (int i=1;i<=n;i++)
 {
  K[i]=waga/C[i];
  waga-=K[i]*C[i];
  wynik+=K[i]
 }
 return wynik;
}

main()
{
 int W[MAX], C[MAX], K[MAX], waga, n, ilosc;
 cout<<"podaj maksymalna wage windy: ";
 cin>>waga;
 cout<<"podaj liczbe osob: ";
 cin>>n;
 wczytaj(W,C,n,ilosc);
 cout<<"wartosc windy = "<<pakujPlecak(W,C,n,waga,K)<<endl;
 cout<<"zapakowane przedmioty:"<<endl;
 for (int i=1;i<=n;i++) cout<<i<<":  ilosc="<<K[i]<<"  wartosc="<<W[i]<<"  waga="<<C[i]<<endl;
//system("pause");
 return 0;
}
