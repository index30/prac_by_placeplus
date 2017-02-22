#include <iostream>
#include <cmath>
#include <string>

int calc(int n);
double calc(double n);

int main()
{
  //同名で関数を定義可能
  //同名の関数の目的は同一でなければならない
  std::sqrt(2.0f);
  std::sqrt(2.0);
  std::sqrt(2.0L);

  int num = 5;
  double d = 10.6;

  std::cout << calc(num) << std::endl;
  std::cout << calc(d) << std::endl;
}

//オーバーロードする際は仮引数が異なっている必要あり
//引数なしでオーバーロードはエラー
//引数も曖昧にならないようにcastをしておくと安定
int calc(int n)
{
  return n*n;
}

double calc(double d)
{
  return d*d;
}
