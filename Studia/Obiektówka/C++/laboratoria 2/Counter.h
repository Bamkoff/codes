#include <iostream>

#pragma once

class Counter
{
protected:
  int n;

public:
  Counter();
  Counter& set(int i);
  int get();
  virtual Counter& incr();
};
