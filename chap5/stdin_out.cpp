#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  std::string str;
  int n1;
  int n2;
  const int str_max = 6;

  std::cout << "どちらの計算を行いますか?\n加算or乗算" << std::endl;
  //文字数制限(文字を超えたもので出力すると誤作動?が起きる)
  std::cin >> std::setw(str_max) >> str;

  if (str == "加算"){
    std::cout << "加算する整数を2つ入力してください" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << n1+n2 << std::endl;
  }
  else if(str == "乗算"){
    std::cout << "乗算する整数を2つ入力してください" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << n1*n2 << std::endl;
  }
  else{
    //標準エラーへの出力
    //cerrはバッファリングされず、clogはバッファリングされる
    std::cerr << "その計算は搭載されておりません" << std::endl;
  }
}
