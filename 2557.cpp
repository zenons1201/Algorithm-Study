#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int map[101][101];
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            if(i!=j)map[i][j] = 99999999;
        
    for (int i = 0; i < m; i++) {
            int a, b; cin >> a >> b;
            a--;b--;
            map[a][b] =map[b][a]= 1;
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (map[i][j] > map[i][k] + map[k][j])
                    map[i][j] = map[i][k] + map[k][j];
            }
        }
    }//플로이드 와샬 알고리즘 All pair Shortest Path 알고리즘.
 
    int MIN = 99999999;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++) {
            temp += map[i][j];
        }
        if (MIN > temp) {
            MIN = temp;
            result = i;
        }
    }
    cout << result+1 << endl;
    return 0;
}

