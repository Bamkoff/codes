#include <iostream>
#include <string>

using namespace std;

int main(){
    
string anagram;
string anagram2;
cout<<"Podaj wyraz"<<endl;        
getline(cin,anagram);    

anagram2=anagram;

int size = anagram.size();
int licznik=0;

for(int i=0;i<size;i++){
anagram=anagram2;
if(i!=0)swap(anagram[0],anagram[i]);
             for(int j=1;j<size;j++){
                     for(int h=1;h<size;h++){
                                for(int k=h;k<size-1;k++){
                                                licznik++;
                                                swap(anagram[k],anagram[k+1]);
                                                cout<<licznik<<". "<<anagram<<endl;
                                                         }
                                                }     
                                     }                                  

}

system("pause>null");
return 0;
}
