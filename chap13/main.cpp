#include <iostream>
#include "constract.h"

int main()
{
  //コンストラクタの初期化
  Constract c1;
  std::cout << c1.GetName() << std::endl;
  c1.SetData("帝国工業", "壁面", 100000, 300000000);
  std::cout << c1.GetName() << std::endl;
  c1.b_res("土台");
  Constract c2("泥沼建設", "土台", 30, 100000);
  c2.b_res("土台");
}
