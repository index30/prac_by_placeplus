#include <iostream>
#include "static.h"

int main()
{
  //静的グローバル変数を定義する場合は無名名前空間を使うことが推奨される
  //今回は定義しない
  std::cout << Static::GetObjCount() << std::endl;
  Static s1("電気太郎", 30);
  std::cout << s1.GetName() << " が入会しました" << std::endl;
  std::cout << s1.GetName() << " は " << s1.GetSeCount() << " 回静電気にやられました" <<std::endl;
  std::cout << "総勢" << Static::GetObjCount() << "名" <<std::endl;
  Static* s2 = new Static("絶縁花子", 0);
  std::cout << s2->GetName() << " が入会しました" << std::endl;
  std::cout << s2->GetName() << " は " << s2->GetSeCount() << " 回静電気にやられました" <<std::endl;
  std::cout << "総勢" << Static::GetObjCount() << "名" <<std::endl;
  std::cout << s2->GetName() << " は退会しました" << std::endl;
  delete s2;
  std::cout << "総勢" << Static::GetObjCount() << "名" <<std::endl;
}
