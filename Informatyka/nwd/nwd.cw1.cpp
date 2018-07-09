#include <iostream>

using namespace std;

int main()
{
int a;
int b;
int c;
int licznik=0;

do{ 
cin>>b;
}while(b<1);

if(a>b){
do{
c=b;
b=a%b;
a=c;         
licznik+=1;      
}while(b!=0);
}

else{
if(b>a){
do{
c=a;
a=b%a;
b=c;         
licznik+=1;      
}while(a!=0);            
}
}

if(b>a) cout<<"wynik nwd = "<<a<<endl;
if(a>b) cout<<"wynik nwd = "<<b<<endl;

cout<<"funkcja wywolala sie "<<licznik<<" razy"<<endl;
cout<<"wynik = "<<a<<endl;
system("pause>null");

}
