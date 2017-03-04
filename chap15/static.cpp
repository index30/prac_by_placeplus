#include "static.h"

int Static::sObjCount = 0;

Static::Static(std::string name, int count) :
  se_name(name), se_count(count)
{
  ++sObjCount;
}

Static::~Static()
{
  --sObjCount;
}

std::string Static::GetName() const
{
  return se_name;
}

int Static::GetSeCount() const
{
  return se_count;
}

int Static::GetObjCount()
{
  return sObjCount;
}
