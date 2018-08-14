#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> num;
    int n = 0;
    cin >> n;
    set<int> out;
    int large = 0, little = 0;
    while (n--) {
        int tmp = 0;
        cin >> tmp;
        num.push_back(tmp);
    }
    for (int i = 0; i < num.size(); i++) {
        large = 0;
        little = 0;
        for (int j = 0; j < num.size(); j++) {
            if (num[j] > num[i])
                large++;
            if (num[j] < num[i])
                little++;
        }
        if (little == large)
            out.insert(num[i]);
    }
    if (out.size() == 0)
        cout << -1;
    else {
        set<int>::iterator it;
        for (it = out.begin(); it != out.end(); it++)
            cout << *it << ' ';
    }
    cout << endl;

    return 0;
}
