#include <iostream>
#include <string>
#include <sstream>

int main()
{
  std::string str1("stringを使うにはstringをincludeする必要がある\n");
  std::string str2;
  str2 = "初期値を与えないと空の文字列で初期化される。代入も可能";
  if (str1 == str2){
    std::cout << "OK" << std::endl;
  }
  else{
    std::cout << str1+str2 << std::endl;
    std::cout << "また、文字列比較に演算子が使える" << std::endl;
  }
  std::string str3 = "テスト";
  std::cout << "文字列の長さも取得できるが、日本語一文字は長さ1ではないので注意" << std::endl;
  //std::cout << str3.size() << std::endl;
  std::ostringstream oss;
  oss << "「テスト」の文字列の長さは " << str3.size() << " となる";
  std::string out(oss.str());
  std::cout << out << std::endl;
  /*
    C++11以降でのお話
  rstring = R"(
改行コードを入れなくても
生文字列リテラルを用いれば
改行出来る
)";*/
  //std::out << rstring << std::endl;
}
