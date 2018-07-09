#include <iostream>


class Stos
{
    protected:
        struct element{
                    int dana;
                    element* next;
					element() { next = 0;}                   
                    };

		struct lista{
			element* first;
			lista() {first = 0;}
			void dodaj_element(int x)
			{
				element* el = new element;
				el->dana = x;
				if(first==0)
				{
					first = el;
				}
				else
				{
					el->next = first;
					first=el;
				}
			}
			int usun_element()
			{
				if(first==0)
				{
					return 0;	
				}
				element* temp = new element;
				int x = first->dana;
				temp = first;
				first = first->next;
				delete temp;
				return x;
			}
			int _rozmiar_iter()
			{
				int licz = 0;
				element* temp = new element;
				temp = first;
				while(temp!=0)
				{
					temp = temp->next;
					licz++;
				}
				
				return licz;
			}
			int _rozmiar_reku(element* temp)
			{
				if(temp==0) return 0;
				if(temp->next == 0) return 1;
				return _rozmiar_reku(temp->next) + 1;
			}
		};
		
		lista l;
        int id;
        static int licznik;       


    public:
        Stos()      {id = 0;}
        //~Stos()     =0;
        void push(int x)
		{
    		id++;
    		l.dodaj_element(x);
		}
        virtual void pop()  
		{
			if(id>0)
			{
				std::cout<<l.usun_element()<<std::endl;
				id--;
			}
        }
        bool stack_empty() 
		{
			return id;
		}
		int rozmiar_iter()
		{
			return l._rozmiar_iter();
		}
		int rozmiar_reku()
		{
			return l._rozmiar_reku(l.first);
		}
};

int Stos::licznik=0;

/*int main()
{
	Stos s;
	int x;
	for(int b = 0;b<3;b++)
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
}*/
