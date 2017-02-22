#include <iostream>
#include <cstdlib>
//#define NULL 0

int main()
{
  /*
    static_cast
    const_cast...通常使わない(constなどを外す)
    reinterpret_cast...値を変えずに型の解釈だけを変える
   */

  double d_num = 13.4;
  //最も一般的なキャスト
  //間違ったキャストはエラーとして適切に検出できる
  int cast_num = static_cast<int>(d_num);
  std::cout << d_num << " is casted " << cast_num << " by \"static_int\" " << std::endl;

  int* p = static_cast<int*>(std::malloc(sizeof(int)));
  std::cout << p << std::endl;
  std::free(p);

  //void*型が絡まない形でのポインタ型同士のキャストはstatic_castでは行えない
  //void*型を経由してcastを行う
  double* b = static_cast<double*>(static_cast<void*>(&cast_num));
  std::cout << *b << std::endl;

  int* a = nullptr;
  if (!a){
    std::cout << "C++11ではNULLではなくnullptrを用いる" << std::endl;
  }
}
