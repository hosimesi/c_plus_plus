#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    float mean_value = (a + b) / 2.0;
    int shou = mean_value * 10;

    int i = shou % 10;
    if (i >= 5) {
        cout << static_cast<int>(mean_value) + 1 << endl;
    } else if (i == 0) {
        cout << static_cast<int>(mean_value) << endl;
    } else {
        cout << static_cast<int>(mean_value) - 1 << endl;
    }
}
