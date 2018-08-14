#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    int n = 0;
    cin >> n;
    while (n--) {
        int tmp = 0;
        cin >> tmp;
        num.push_back(tmp);
    }
    int cnt = 0;
    for (int i = 1; i < num.size() - 1; i++) {
        if (num[i] > num[i - 1] && num[i] > num[i + 1])
            cnt++;
        else if (num[i] < num[i - 1] && num[i] < num[i + 1])
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
