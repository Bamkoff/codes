#include <iostream>

class Stos
{
	protected:
	
		struct list
		{
			int data;
			list* next;
			list() {next = nullptr;}
		};
		list* top;
		int id;
	
	public:
		Stos()  {id = 0; top = nullptr;}
		
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
		
		Stos(const Stos& s)
		{
			top = copy(s.top);
			id = s.id;
		}
		
		list* copy(list* l)
		{
			if(l==nullptr) return nullptr;
			list* q = new list;
			q->data = l->data;
			q->next = copy(l->next);
			return q;
		}
		
		void push(int x)
		{
			list* l = new list;
			l->data = x;
			id++;
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
		
		bool pop(int& p)
		{
			if(stack_empty()) return false;
			list* temp = new list;
			p = top->data;
			top = top->next;
			id--;
			return true;	
		}
		
		bool stack_empty()
		{
			if(id==0) return true;
			return false;
		}
};

int main()
{
	
	return 0;
}
