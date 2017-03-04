#include <iostream>
#include "training.h"

int main()
{
  Training t1;
  t1.SetData("腹筋", 30, 7);
  std::cout << t1.GetAtimes() << std::endl;
}
