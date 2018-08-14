#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    int n = -1;
    while (cin >> n && n != 0)
        num.push_back(n);
    int sum = 0;
    int zeng = 0;
    bool flag = false;
    for (int i = 0; i < num.size(); i++) {
            switch(num[i]) {
                case 1:
                    sum += num[i];
                    flag = false;
                    zeng = 0;
                    break;
                case 2:
                    flag = true;
                    if (flag)
                        zeng += 2;
                    sum += zeng;
            }
    }
    cout << sum << endl;

    return 0;
}
