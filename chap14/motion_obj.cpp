//動的なメモリ領域の確保

#include <iostream>

class Motion{
public:
  Motion(const char* s) : mStr(s)
  {
    std::cout << "Motion(" << mStr << ")" << std::endl;
  }

  ~Motion()
  {
    std::cout << "~Motion(" << mStr << ")" << std::endl;
  }

private:
  const char* mStr;
};

Motion* func()
{
  return new Motion("func");
}

int main()
{
  Motion* c1 = new Motion("main");
  Motion* c2 = func();

  //動的なメモリ領域の解放
  delete c1;
  delete c2;
}
