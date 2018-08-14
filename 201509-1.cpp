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
    int before = -1;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] != before) {
            before = num[i];
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
