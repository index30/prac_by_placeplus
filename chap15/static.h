#ifndef STATIC_H
#define STATIC_H

#include <string>

class Static{
public:
  Static(std::string name, int count);
  ~Static();

  std::string GetName() const;
  int GetSeCount() const;
  static int GetObjCount();

private:
  std::string se_name;
  int se_count;
  //静的メンバ変数の宣言
  static int sObjCount;
};

#endif
