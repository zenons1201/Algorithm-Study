#include <iostream>

using namespace std;

int main() {
 
    int a, b, c;
    cin >> a >> b >> c;
 
    if (c > b) {
        cout << a / (c-b) + 1 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}

