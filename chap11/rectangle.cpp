#include <iostream>
#include <string>

class Rectangle{
  //メンバ変数
  std::string name;
  int height;
  int width;
  int area;

  //メンバ関数
  //publicでメンバ関数の呼び出しを可能に
public:
  void SetData(std::string name, int height, int width);
  int Get_area();
  std::string Get_name();
};

void Rectangle::SetData(std::string name, int height, int width)
{
  this->name = name;
  this->height = height;
  this->width = width;
  this->area = height*width;
}

int Rectangle::Get_area()
{
  return this->area;
}

std::string Rectangle::Get_name()
{
  return this->name;
}

void CompRect(Rectangle* r1, Rectangle* r2);

int main()
{
  std::string s1;
  std::string s2;
  int h1;
  int h2;
  int w1;
  int w2;
  std::cout << "1つ目の 長方形の名前 (縦の長さ) (横の長さ) を入力してください" << std::endl;
  std::cin >> s1 >> h1 >> w1;
  std::cout << "2つ目の 長方形の名前 (縦の長さ) (横の長さ) を入力してください" << std::endl;
  std::cin >> s2 >> h2 >> w2;
  Rectangle rectangle1;
  Rectangle rectangle2;
  rectangle1.SetData(s1, h1, w1);
  rectangle2.SetData(s2, h2, w2);
  CompRect(&rectangle1, &rectangle2);
}

void CompRect(Rectangle* r1, Rectangle* r2)
{
  if (r1->Get_area() > r2->Get_area())
    {
      std::cout << r1->Get_name() << " is bigger than " << r2->Get_name() << std::endl; 
    }
  else
    {
      std::cout << r2->Get_name() << " is bigger than " << r1->Get_name() << std::endl; 
    }
}
