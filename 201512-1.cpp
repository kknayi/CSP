#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int sum = 0;
    cin >> n;
    int chu = n, yu = 0;
    while (chu >= 10) {
        yu = chu % 10;
        sum += yu;
        chu /= 10;
    }
    sum += chu;
    cout << sum << endl;

    return 0;
}
