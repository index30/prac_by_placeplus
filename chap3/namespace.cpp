# include <iostream>
# include <cstring>
//名前空間内に定義すればその他のメソッドと競合しなくなる
//ネストさせることができ、自分用のライブラリを作るときに有用
namespace ScoreRank {
  struct Data {
    char name[255];
    int score;
    int rank;
  };

  namespace score {
    void update(int* prev, int* n){
      int tmp = *prev;
      *prev = *n;
      *n = tmp;
    }
  }

  namespace top {
    char name[255];
    //明らかに冗長なメソッドであるが、自己の理解のためにあえてこの記法とする
    void update(char name1[], char name2[]){
      char tmp[255];
      std::strcpy(tmp,  name1);
      std::strcpy(name1, name2);
      std::strcpy(name2, tmp);
    }
  }
}

int main()
{
  namespace s = ScoreRank::score;
  namespace t = ScoreRank::top;

  ScoreRank::Data first;
  const char* jack = "Jack";
  strcpy(first.name, jack);
  first.score = 10;
  first.rank = 1;
  char test1[255];
  std::strcpy(test1, jack);
  std::strcpy(t::name, test1);
  std::cout << t::name << std::endl;


  ScoreRank::Data second;
  const char* anny = "Anny";
  strcpy(second.name, anny);
  second.score = 50;
  int num = 2;
  s::update(&first.rank, &num);
  second.rank = 1;
  char test[255];
  std::strcpy(test, anny);
  t::update(t::name, test);
  std::cout << t::name << std::endl;

}
