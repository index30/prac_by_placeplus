# include <iostream>

int main(int argc, char* argv[])
{
  // print Hello,someone.
  std::cout << "Hello, someone." << std::endl;
  std::cout << "Hello,\nsomeone." << std::endl;
  // 型の自動判定も行ってくれる
  std::cout << argv[1] << std::endl;
}
