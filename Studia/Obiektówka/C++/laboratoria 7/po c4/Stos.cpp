#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

template <class T>
class Stos
{
	protected:
	
		struct list
		{
			T data;
			list* next;
			list() {next = nullptr;}
		};
		list* top;
	
	public:
		Stos()  {top = nullptr;}
		
		~Stos()
		{
			while(!stack_empty())
			{
				list* temp = new list;
				temp = top;
				top = top->next;
				delete temp;
			}
		}
		
		Stos& operator<<(const T x) 
		{
			push(x);
			return *this;
		}
		
		Stos& operator>>(T& x) 
		{
			pop(x);
			return *this;
		}
		
		Stos(const Stos& s)
		{
			cout<<"Kopiujemy"<<endl;
			top = copy(s.top);
	
		}
		
		list* copy(list* l)
		{
			if(l==nullptr) return nullptr;
			list* q = new list;
			q->data = l->data;
			q->next = copy(l->next);
			return q;
		}
		
		void push(T x)
		{
			list* l = new list;
			l->data = x;
			if(top==nullptr)
			{
				top = l;
			}	
			else 
			{
				l->next = top;
				top = l;
			}
		}
		
		bool pop(T& p)
		{
			if(stack_empty()) return false;
			p = top->data;
			top = top->next;
			return true;	
		}
		
		bool stack_empty()
		{
			if(top==nullptr) return true;
			return false;
		}
};

/*
void NiejawneKopiowanie(Stos s)
{
	int a,b,c;
	s>>a>>b>>c;
	cout<<a<<", "<<b<<", "<<c<<endl;
}
*/

int main()
{
	Stos<char> s;
	
	s<<'a'<<'b'<<'c';
	
//	NiejawneKopiowanie(s);
	
	Stos<char> s1(s);
	
	char a,b,c;
	
	s>>a>>b>>c;
	
	cout<<a<<", "<<b<<", "<<c<<endl;
	
	a=' ';
	b=' ';
	c=' ';
	
	s1>>a>>b>>c;
	cout<<a<<", "<<b<<", "<<c<<endl;
	
	
	
	return 0;
}
