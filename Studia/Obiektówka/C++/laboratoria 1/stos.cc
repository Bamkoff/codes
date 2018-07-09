#include <iostream>

class Stos
{
private:
  struct list
  {
  	int data;
  	list* next;
  	list();
  };
  int n;
  int id;
  int static counter;

public:
       Stos()        { counter++; n=0; id = counter ;std::cout<<"["<<id<<"]Pojawiam sie!"<<std::endl;}
       ~Stos()       { std::cout<<"["<<id<<"]Znikam!"<<std::endl;}
  void push(int e)   { }
  int  pop()         {  }
  int  empty()       { return n==0; }
  int  state()         { return n; }
};

  int Stos::counter = 0;
  list::list()

main()
{
  Stos *stos1;	
  Stos *stos2;
  Stos *stos3;
  stos1 = new Stos;
  stos2 = new Stos;
  stos3 = new Stos;
  delete stos3;
  delete stos2;
  delete stos1;
}
