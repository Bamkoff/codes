#include <iostream>

using namespace std;


int main()
{
int a=0;

cout<<"podaj ile liczb bêdzie w ci¹gu"<<endl;
do
{
cin>>a;
}while(a<=0);

int *tab = new int[a];


int c=0;

for(int i=0;i<a;i++)
{
cout<<"podaj liczbe do ci¹gu"<<endl;
cin>>c;
tab[i]=c;        
}

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
