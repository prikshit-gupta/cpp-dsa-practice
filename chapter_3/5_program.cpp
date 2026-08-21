#include <iostream>
using namespace std;

int main() {

  char ch;
  cout << "Enter Character: ";
  cin >> ch;

  if (ch >= 'a' && ch <= 'b') {
    cout << "Lower Case" << endl;
  } else if (ch >= 'A' && ch <= 'B') {
    cout << "Upper Case" << endl;
  }

  return 0;
}
