  // zadeklaruj strumie� -a�cuchowy ssrzeka 
  
  // wczytaj napis ss z-o�ony z cyfr (nie badamy poprawno�ci)
  // do rzeki wrzucamy napis ss
  // a nast�pnie wy-awiamy z rzeki liczb� zakr�t�w (do zmiennej zakrety)
  // wy�wietl ss
  // wy�wietl zakrety
   
  // a teraz odwrotnie
  
  // wczytaj liczb� zakr�t�w (ilo�� cyfr mniejsza ni� poprzednio)
  // do rzeki wrzucamy liczb� zakrety
  // a nast�pnie wy-awiamy z rzeki napis ss
  // wy�wietl ss
  // wy�wietl zakrety
  
  // co zauwa�asz? zanim zrobisz drug� operacj�, najpierw wyczy�� strumie�
  // zr�b to w odpowiednim miejscu


#include <iostream>
#include <sstream>

using namespace std;

main () {
  stringstream ssrzeka;   
  
  string ss;
  cout << "Napis zlozony z cyfr : ";
  cin >> ss;
  cout << "-------------------------------\n";

  double zakrety;                              
  ssrzeka << ss;  ssrzeka >> zakrety;
    
  cout << "Napis ss       :  " << ss << endl;
  cout << "Liczba zakrety :  " << zakrety << "\n\n\n";
  
  ssrzeka.ignore(4,' ');
  
  
  // a teraz odwrotnie
  
  cout << "Liczba zakretow : ";
  cin >> zakrety;
  cout << "-------------------------------\n";
  ssrzeka << zakrety;  ssrzeka >> ss;
  
  cout << "Liczba zakrety :  " << zakrety << endl;
  cout << "Napis ss       :  " << ss << "\n\n\n"; 
  
  ssrzeka >> ss;
  cout << "Napis ss       :  " << ss << "\n\n\n"; 
  system("pause");
}
