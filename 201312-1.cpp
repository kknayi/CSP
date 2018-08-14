#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    int cnt[10000 + 1] = { 0 };
    int n = 0;
    cin >> n;
    while (n--) {
        int tmp = 0;
        cin >> tmp;
        num.push_back(tmp);
    }
    for (int i = 0; i < num.size(); i++) {
        cnt[num[i]]++;
    }
    int maxx_cnt = 0;
    int minn = 0;
    for (int i = 0; i < 10001; i++) {
        if (cnt[i] > maxx_cnt) {
            maxx_cnt = cnt[i];
            minn = i;
        }
        if (cnt[i] == maxx_cnt) {
            if (i < minn)
                minn = i;
        }
    }
    cout << minn << endl;

    return 0;
}
