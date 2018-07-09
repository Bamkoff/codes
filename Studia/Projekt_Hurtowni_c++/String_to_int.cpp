#include "Functions/String_to_int.hpp"
#include <iostream>
#include <string>


int string_to_number(std::string a)
{
	int liczba=0;
	int potega_10 = 1;
	for(int i=a.size()-1;i>=0;i--)
	{
		if(a[i] == '0') potega_10*=10;
		if(a[i] == '1') 
		{
			liczba+=1*potega_10;
			potega_10*=10;
		}
		if(a[i] == '2') 
		{
			liczba+=2*potega_10;
			potega_10*=10;
		}
		if(a[i] == '3') 
		{
			liczba+=3*potega_10;
			potega_10*=10;
		}
		if(a[i] == '4') 
		{
			liczba+=4*potega_10;
			potega_10*=10;
		}
		if(a[i] == '5') 
		{
			liczba+=5*potega_10;
			potega_10*=10;
		}
		if(a[i] == '6') 
		{
			liczba+=6*potega_10;
			potega_10*=10;
		}
		if(a[i] == '7') 
		{
			liczba+=7*potega_10;
			potega_10*=10;
		}
		if(a[i] == '8') 
		{
			liczba+=8*potega_10;
			potega_10*=10;
		}
		if(a[i] == '9') 
		{
			liczba+=9*potega_10;
			potega_10*=10;
		}
	}
	
	return liczba;
}
