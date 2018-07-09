#include "Counter.h"
#include "SuperCounter.h"

SuperCounter::SuperCounter()
{
  n=0;
  _step=1;
}

void SuperCounter::step(int i)
{
	_step=i;
}

SuperCounter& SuperCounter::incr()
{
  n+=_step;
  return *this;
}
