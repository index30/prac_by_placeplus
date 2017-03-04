#include "constract.h"
#include <iostream>
#include <string>

Constract::Constract() :
  //メンバイニシャライザ
  //コンストラクタ内で代入するよりも高速
  company("Don't Exist"), responsible("No Responsible"),member(0),capital(0)
{
}

Constract::Constract(std::string comp, std::string res, int mem, int cap) :
  company(comp), responsible(res), member(mem), capital(cap)
{
}

void Constract::SetData(std::string comp, std::string res, int mem, int cap)
{
  company = comp;
  responsible = res;
  member = mem;
  capital = cap;
}

void Constract::b_res(std::string content)
{
  if (responsible == content)
    {
      std::cout << "私どもの会社"+company+"の責任でございます" << std::endl;
    }else
    {
      std::cout << "その件に関しまして当社、"+company+"は一切関与しておりません" << std::endl;
    }
}

std::string Constract::GetName() const
{
  return company;
}

