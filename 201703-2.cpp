#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> stu;
    int n = 0, m = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        stu[i] = i + 1;
    for (int i = 0; i < stu.size(); i++)
        cout << stu[i] << ' ';
    cout << endl;
    while (m--) {
        int stu_num = 0, mov = 0;
        cin >> stu_num >> mov;
        for (int i = 0; i < stu.size(); i++) {
            if (stu[i] == stu_num) {
                stu.erase(stu.begin() + i);
                stu.insert(stu.begin() + i + mov, stu_num);
                break;
            }
        }
    }
    for (int i = 0; i < stu.size(); i++)
        cout << stu[i] << ' ';
    cout << endl;

    return 0;
}
