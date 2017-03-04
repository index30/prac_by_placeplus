#include <iostream>
#include "ValueStore.h"

int value = 10;
void func(bool flag);

int main()
{
  func(true);
  std::cout << value << std::endl;

  func(false);
  std::cout << value << std::endl;
}

//この関数を呼び出した時にvalueが10ならば
//呼び出し後も確実に10であるようにデストラクタを用いて処理を行う
void func(bool flag)
{
  ValueStore store(&value);

  value = 50;
  if(flag){
    return;
  }
  value = 100;
}
