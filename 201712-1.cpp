#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> num;
    int n = 0, x = 0;
    int minn = 10000;
    cin >> n;
    while(n--) {
        cin >> x;
        num.push_back(x);
    }
    for (int i = 0; i < num.size(); i++) {
        for (int j = (i + 1); j < num.size(); j++) {
            int tmp = abs(num[i] - num[j]);
            if (tmp < minn)
                minn = tmp;
        }
    }
    cout << minn << endl;

    return 0;
}
