#include <iostream>
using namespace std;

int main()
{
    string l;
    cin >> l;
    const char a = '1';
    int value = 0;
    for (int i = 0; i <= 2; i++)
    {
        if (l[i] == a)
        {
            value++;
        };
    }
    cout << value << endl;
}
