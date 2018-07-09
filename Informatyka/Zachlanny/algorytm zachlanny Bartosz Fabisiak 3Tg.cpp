#include <iostream>

using namespace std;

int tab[5];
int koszt=0;
void sort{
for(int i=0;i<4;i++){     
   
   for(int j=0;j<4;j++){  
                       if(tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);   
                       }
                    }
}

int zachlanny(int pocz,int kon){
if(pocz<kon){
           tab[pocz+1]=tab[pocz]+tab[pocz+1]
           koszt+=tab[pocz+1]           
           return zachlanny(pocz+1,kon)
           }    
else{
     return tab[pocz+1];
     }
}


int main(){
    
for(int i=0;i<5;i++)
{
 cout<<"podaj liczbe"<<endl;
 cin>>tab[i];                   
}    

    

system("pause>>null");
return 0;
}
