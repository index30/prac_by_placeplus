# include <iostream>
# include <cstring>

struct PersonalData{
  char name[255];
  int old;
};

int main()
{
  //C言語では変数宣言はブロックの先頭(C98以前)
  //文字列定数はconstを必ず付ける(C++. Cでもconstをつけないと動作が保証されない)
  const char* name = "John";
  std::cout << name << std::endl;

  //C++はどこでも宣言可能
  std::size_t len = std::strlen(name);
  std::cout << len << std::endl;

  //構造体の宣言
  //c++ではstructの宣言不要
  PersonalData pd;
  strcpy(pd.name, name);
  pd.old = 30;
  std::cout << pd.name;
  std::cout << " is ";
  std::cout << pd.old;
  std::cout << " years old." << std::endl;
}
