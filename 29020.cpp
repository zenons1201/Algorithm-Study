#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
 
int now = 0;
int umgye[8] = { 0, };
 
int main() {
    //freopen("test.txt", "r", stdin);
    for (int i = 0; i < 8; i++) {
        cin >> umgye[i];
    }
    for (int i = 0; i < 7; i++) {
        if (umgye[i + 1] == umgye[i] + 1)now = 1;
        else if (umgye[i + 1] == umgye[i] - 1)now = 2;
        else {
            now = 3;
            break;
        }
    }
    switch (now) {
    case 1: cout << "ascending";
        break;
    case 2: cout << "descending";
        break;
    case 3: cout << "mixed";
        break;
    }
}

