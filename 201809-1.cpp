#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int vec[1005];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++) {
        if (i != 0 && i != n - 1)
            cout << int((vec[i - 1] + vec[i] + vec[i + 1]) / 3) << ' ';
        else if (i == 0)
            cout << int((vec[i] + vec[i + 1]) / 2) << ' ';
        else if (i == n - 1)
            cout << int((vec[i] + vec[i - 1]) / 2) << endl;
    }

    return 0;
}
