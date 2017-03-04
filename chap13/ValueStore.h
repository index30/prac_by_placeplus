#ifndef VALUE_STORE_H
#define VALUE_STORE_H


class ValueStore{
public:
  //デストラクタ
  //int型の変数の値を退避し、破棄時に復元
  ValueStore(int* ptr);
  ~ValueStore();
private:
  int* mPtr;
  int mSaveValue;
};
#endif
