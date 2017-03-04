#include "ValueStore.h"

ValueStore::ValueStore(int* ptr) :
  mPtr(ptr), mSaveValue(*ptr)
{
}

ValueStore::~ValueStore()
{
  *mPtr = mSaveValue;
}
