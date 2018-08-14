#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    int cnt[1000 + 1] = { 0 };
    int n = 0;
    cin >> n;
    while (n--) {
        int tmp = 0;
        cin >> tmp;
        num.push_back(tmp);
    }
    for (int i = 0; i < num.size(); i++) {
        cnt[num[i]]++;
        cout << cnt[num[i]] << ' ';
    }
    cout << endl;

    return 0;
}
