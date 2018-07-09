#include <iostream>

#include "Counter.h"
#include "SuperCounter.h"

using namespace std;

int main()
{
  SuperCounter l;
  cout << l.get() << endl;
  l.step(3);
  l.set(5).incr().incr();
  cout << l.get() << endl;
}
