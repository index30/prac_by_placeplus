#include <iostream>

//関数テンプレート
//関数テンプレートもオーバーロード可能
template <typename T>
void calc(T a);

template <typename A1, typename A2>
//C+11以降 decltype...式から型を得る
auto add(A1 s, A2 t) -> decltype(s + t);

int main()
{
  calc<int>(10);
  calc<double>(2.5);
  std::cout << add(5, 3.4) << std::endl;
}

template <typename T>
void calc(T a)
{
  std::cout << a*a << std::endl;
}

template <typename A1, typename A2>
auto add(A1 s, A2 t) -> decltype(s + t)
{
  return s + t;
}
