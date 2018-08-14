#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> cake;
    int n = 0, k = 0;
    int cnt = 0;
    int tmp = 0;
    cin >> n >> k;
    while (n--) {
        cin >> tmp;
        cake.push_back(tmp);
    }
    tmp = 0;
    for (int i = 0; i < cake.size(); i++) {
        tmp += cake[i];
        if (tmp >= k) {
            tmp = 0;
            cnt++;
        }
    }
    if (tmp < k && tmp != 0)
        cnt++;
    cout << cnt << endl;

    return 0;
}
