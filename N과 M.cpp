#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int n, m;
bool visited[100];
vector<int> v;
void dfs() {
    if (v.size() == m) {
    	sort(v.begin(), v.end());
        for (int i = 0; i < m; i++)
        cout << v[i] << endl;
        printf("\n");
        return;
    }
 
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = true; v.push_back(i);
            dfs();
            visited[i] = false; v.pop_back();
        }
    }
}
 
int main(void) {
    cin >> n >> m;
    dfs();
}

