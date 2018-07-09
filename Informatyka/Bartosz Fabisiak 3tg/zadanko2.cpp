#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int a=0;
fstream plik;
plik.open("d:/dane5-1.txt",ios::in);
if(plik.good())
{
while(!plik.eof())
{
                  
a++;
 
} 
plik.close();               
}



int c=0;

int sumanaj=tab[0];
int suma=0;

for(int i=0;i<a;i++)
{
 suma=tab[i];
 if(suma>sumanaj) sumanaj=suma;
 c=i+1;
 for(;c<a-1;c++){
               suma+=tab[c];               
               if(suma>sumanaj) sumanaj=suma;               
               }       
        

}

system("pause");
return 0;
}

