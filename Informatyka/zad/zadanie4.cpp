#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    
fstream plik1;
fstream plik2;
fstream rezultat;

plik1.open("C:/LICZBY1.TXT",ios::in);
plik2.open("C:/LICZBY2.TXT",ios::in);
rezultat.open("C:/REZULTAT.TXT",ios::out);

if((plik1.good())&&(plik2.good())&&(rezultat.good()))
{
string liczba;
int min;

getline(plik1,liczba);
min = liczba.size();


while(!plik1.eof())
{
 getline(plik1,liczba);
 
 
 if(liczba.size()<min)
 {
  min = liczba.size();
  
 }  
}     
                                 
}

plik1.close();
plik2.close();
rezultat.close();

system("pause");
return 0;
}
