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
    for (int i = 0; i < num.size(); i++) {
        for (int j = i + 1; j < num.size(); j++)
            if (num[i] + num[j] == 0)
                cnt++;
    }
    cout << cnt << endl;

    return 0;
}
