# include <iostream>

//仮引数が無い場合はvoidとして認識(c++のみ)
int hello()
{
  std::cout << "hello" << std::endl;
  //returnを付けなくても正しく実行はされる
  return 0;
}

//voidを明示すれば特に問題はない
void bye()
{
  std::cout << "bye" << std::endl;
}

int main()
{
  //main関数内のreturnは省略可能
  hello();
  bye();
}
