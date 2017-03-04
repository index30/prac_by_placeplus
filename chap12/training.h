#include <iostream>
#include <string>

class Training{
public:
  //public以下が公開
  void SetData(std::string t, int i_times, int a_times);
  int GetItimes() const;
  int GetAtimes() const;

private:
  //private以下が非公開
  std::string training;
  int iter_times;
  int act_times;
};
