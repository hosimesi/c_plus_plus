#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> values(N);
    int a, b;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        values.at(i) = make_pair(b, a);
    }

    sort(values.begin(), values.end());

    for (int i = 0; i < N; i++)
    {
        cout << values.at(i).second << " " << values.at(i).first << endl;
    }
}
