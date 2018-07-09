#include <iostream>
#include <ctime>
#include <string>

class Date
{
	private:
		int day;
		int month;
		int year;
	
	public:
		Date()
	    {
	    	time_t t = time(0);
			struct tm * now = localtime(&t);
	    	year = now->tm_year + 1900;
			month = now->tm_mon + 1;
			day = now->tm_mday;
		}
		
		Date(int d, int m, int y)
	    {
	    	day = d;
	    	month = m;
	    	year = y;
		}
		
		void Set(int d, int m, int y)
	    {
	    	day = d;
	    	month = m;
	    	year = y;
		}
		
		void print()
		{
			std::cout<<day<<"-"<<month<<"-"<<year<<std::endl;	
		}	
};


int main()
{
	Date data;
	data = Date(5,10,2017);
	data.Set(1,6,1236);
	data.print();

	return 0;
}
