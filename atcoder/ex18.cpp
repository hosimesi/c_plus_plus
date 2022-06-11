#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }
    vector<vector<char>> scores(N, vector<char>(N, '-'));
    for (int i = 0; i < M; i++) {
        scores.at(A.at(i)-1).at(B.at(i)-1) = 'o';
        scores.at(B.at(i)-1).at(A.at(i)-1) = 'x';
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j == N-1) {
                cout << scores.at(i).at(j);
            } else {
                cout << scores.at(i).at(j) << " ";
            }
        }
        cout << endl;
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
}
