#include <iostream>
#include "Stos.cc"

class SuperStos : public Stos
{
	public:
	void pop()
	{
		if(id < 1) std::cout<<"Stos jest pusty"<<std::endl;
		else 
		{
			std::cout<<l.usun_element()<<std::endl;
			id--;
		}
	}
	
	
};

int main()
{
	SuperStos s;
	int x;
	for(int b=0;b<3;b++)
	{
		std::cin>>x;
		s.push(x);
	}
	std::cout<<s.rozmiar_reku()<<std::endl;
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	std::cout<<s.rozmiar_reku()<<std::endl;
	
	return 0;
}
