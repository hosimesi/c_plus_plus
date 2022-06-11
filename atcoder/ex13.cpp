#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> scores(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> scores.at(i);
        sum += scores.at(i);
    }

    int avg = sum / scores.size();

    for (int i = 0; i < N; i++)
    {
        cout << abs(scores.at(i) - avg) << endl;
    }
}
