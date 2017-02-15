#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main()
{
  //出力用のファイル生成
  //自動的にクローズされる
  std::ofstream ofs("test_file.txt");
  //何らかのエラーが起きていないことの確認
  if (!ofs){
    std::cerr << "file open failed" << std::endl;
    std::exit(1);
  }

  ofs << "Written by ope_file.cpp" << std::endl;

  //入力用のファイル作成
  std::ifstream ifs("test_file.txt");
  if (!ifs){
    std::cerr << "file open failed" << std::endl;
    std::exit(1);
  }

  //std::string buf;
  std::string line;
  //空白文字が現れるまで読み込む
  //ifs >> buf;
  //改行文字を区切りとみなす
  getline(ifs, line);

  //std::cout << buf << std::endl;
  std::cout << line << std::endl;

  //入出力のファイル
  std::fstream fs("test_file.txt");
  if (!fs){
    std::cerr << "file open failed" << std::endl;
    std::exit(1);
  }
  char c;
  while(fs.get(c)){
    std::cout << c;
  }
  std::cout << std::flush;
}
