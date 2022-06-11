#include <iostream>
#include <map>
using namespace std;

int main()
{

    int N;
    cin >> N;
    map<int, int> value_map;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (value_map.count(a))
        {
            value_map[a] += 1;
        }
        else
        {
            value_map[a] = 1;
        }
    }
    int max = 0;
    int max_key = 0;
    for (auto i : value_map)
    {
        if (max < i.second)
        {
            max = i.second;
            max_key = i.first;
        }
    }
    cout << max_key << " " << max << endl;

}
