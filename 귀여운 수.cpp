#include <bits/stdc++.h>
using namespace std;

string n;

int main() {
    cin >> n;
    for (int i=2; i<n.size(); i++) {
        if (n[i] - n[i-1] != n[i-1] - n[i-2]) {
            cout << "��ĩ��!! <(�� ? ��)>";
            return 0;
        }
    }
    cout << "?(?????)?..�Ƣ� ����!!";
    return 0;
}
}

