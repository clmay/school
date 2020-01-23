#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class SafeArray {
public:
  SafeArray(const unsigned int capacity);
  ~SafeArray();
  void item(const unsigned int index, const int value);
  int get(const unsigned int index) const;

private:
  int* arr{ nullptr };
  unsigned int capacity{ 0 };
};

SafeArray::SafeArray(const unsigned int capacity) {
  arr = new int[capacity];
  this->capacity = capacity;
}

SafeArray::~SafeArray() {
  delete[] arr;
}

void SafeArray::item(const unsigned int index, const int value) {
  if (index >= capacity) {
    cout << "Index is out of bounds" << endl;
  } else {
    arr[index] = value;
  }
}

int SafeArray::get(const unsigned int index) const {
  return arr[index];
}

int main() {
  SafeArray myObject(10);
  myObject.item(1, 1);
  myObject.item(2, 8);
  myObject.item(3, 27);
  myObject.item(4, 64);
  myObject.item(10, 1000);
  cout << myObject.get(4) << endl;
  cin.get();
  return 0;
}
