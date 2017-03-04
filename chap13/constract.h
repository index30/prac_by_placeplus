#include <string>

class Constract{
public:
  Constract();
  //コンストラクタはオーバーロード可能
  Constract(std::string comp, std::string res, int mem, int cap);
  void SetData(std::string comp, std::string res, int mem, int cap);
  void b_res(std::string content);
  std::string GetName() const;

private:
  std::string company;
  std::string responsible;
  int member;
  int capital;
};
