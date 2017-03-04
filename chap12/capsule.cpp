#include <iostream>
#include <string>
#include "training.h"

void Training::SetData(std::string t, int i_times, int a_times)
{
  training = t;
  iter_times = i_times;
  act_times = a_times;
}

int Training::GetItimes() const
{
  return iter_times;
}

int Training::GetAtimes() const
{
  return act_times;
}
