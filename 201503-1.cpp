#include <iostream>
#include <vector>
using namespace std;

int arr[1001][1001];

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tmp = 0;
            cin >> tmp;
            arr[i][j] = tmp;
        }
    }
    for (int i = (m - 1); i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            cout << arr[j][i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
