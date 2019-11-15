#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	const int INF = 987654321;
	int count[10001];
	vector<vector<int>> d;
	
	int N, M;
	cin >> N >> M;
	
	
	for(int i = 1; i <= M; i++)
	{
		int x, y;
		cin >> x >> y;
		d[x][y] = 1;
		d[y][x] = 1;
	}
	
	
}
