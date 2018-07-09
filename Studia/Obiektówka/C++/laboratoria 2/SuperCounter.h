#include <iostream>
#include "Counter.h"

#pragma once

class SuperCounter : public Counter
{
private:
	int _step;
	
public:
	SuperCounter();
	void step(int i);
	SuperCounter& incr();
};

