#include <bits/stdc++.h>
using namespace std;

string n;

int main() {
    cin >> n;
    for (int i=2; i<n.size(); i++) {
        if (n[i] - n[i-1] != n[i-1] - n[i-2]) {
            cout << "ÈïÄ©»×!! <(£þ ? £þ)>";
            return 0;
        }
    }
    cout << "?(?????)?..¡Æ¢½ ²î¿ä¹Ì!!";
    return 0;
}
}

