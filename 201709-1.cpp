#include <iostream>
using namespace std;

int main() {
    int max_3 = 0, max_5 = 0;
    int maxx = 0;
    int n = 0;
    cin >> n;
    max_3 = n / 30;
    max_5 = n / 50;
    for (int i = max_3; i >= 0; i--) {
        for (int j = 0; j <= max_5; j++)
            if ((30 * i + 50 * j) <= n) {
                int mod = (n - 30 * i - 50 * j) / 10;
                int tmp = 4 * i + 7 * j + mod;
                if (tmp > maxx)
                    maxx = tmp;
            }
    }
    cout << maxx << endl;

    return 0;
}
