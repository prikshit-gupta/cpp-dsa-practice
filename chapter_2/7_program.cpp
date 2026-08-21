#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 3;

  int result = a / b;
  cout << result << endl;
  cout << a / (double)b << endl;

  int new_result = a / (double)b;
  cout << new_result << endl;

  return 0;
}