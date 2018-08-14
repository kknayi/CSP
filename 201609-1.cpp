#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> num;
    int n = 0;
    int maxx = 0;
    cin >> n;
    while (n--) {
        int tmp = 0;
        cin >> tmp;
        num.push_back(tmp);
    }
    for (int i = 1; i < num.size(); i++) {
        int tmp = 0;
        tmp = abs(num[i] - num[i - 1]);
        if (tmp > maxx)
            maxx = tmp;
    }
    cout << maxx << endl;

    return 0;
}
