#include <iostream>
#include <fstream>
using namespace std;


int main()
{
int i=0;  
fstream plik;
plik.open("d:/cwabc/abc.txt",ios::in);

if(plik.good())
{
  string napis;
  
  string tab[200];
  for(int j=0;j<200;i++) tab[j]=' ';
  
  int tab2[200];
  for(int j=0;j<200;i++) tab2[j]=0;
  
  int flaga=0;
  
  
  getline(plik,napis);
  tab[0]=napis;
  tab2[0]=1;
  
  do
  {               
    i=0;
    flaga=0;
    getline(plik,napis);
    cout<<napis<<endl;  
    
    do
      {
       if(tab[i]==napis){
                         flaga=1;
                         tab2[i]++;
                         }
       
       i++;
      }while(tab[i] != ' ');
    
    if(flaga==0) 
    {
    tab[i]=napis;
    tab2[i]++;
    }
    
                 
  }while(!plik.eof());
  
  plik.close();

}
else
{
 cout<<"Error! Nie udalo sie otworzyc pliku"<<endl;   
}

system("cls");
i=0;

do
{
    cout<<tab[i]<<" = "<<tab2[i]<<endl;
    i++;
}while(tab[i]<>' ');

system("pause");
return 0;
}
