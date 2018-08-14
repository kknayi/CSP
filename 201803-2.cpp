#include <iostream>
using namespace std;

int main() {
    int loc[105];
    bool dir[105];
    int n = 0, L = 0, t = 0;
    cin >> n >> L >> t;
    for (int i = 0; i < n; i++) {
        cin >> loc[i];
        dir[i] = true;
    }
    while (t--) {
        for (int i = 0; i < n; i++) {
            if (dir[i]) {
                loc[i]++;
                if (loc[i] == L)
                    dir[i] = !dir[i];
            }
            else {
                loc[i]--;
                if (loc[i] == 0)
                    dir[i] = !dir[i];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (loc[i] == loc[j]) {
                    dir[i] = !dir[i];
                    dir[j] = !dir[j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << loc[i] << ' ';
    cout << endl;

    return 0;
}
