#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;
  int value = 1;
  char op;
  for (int i=0; i < S.size(); i++) {
    if (S.at(i) == '+'){
        value++;
    } else if (S.at(i) == '-') {
        value--;
    }
  }
  cout << value << endl;
}
