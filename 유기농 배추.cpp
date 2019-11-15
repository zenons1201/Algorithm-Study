#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

int T, M, N, K;
int maps[50][50];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool visited[50][50];
void DFS(int x, int y)
{
	visited[x][y] = true;
	
	for(int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >= 0 && ny >= 0 && nx < M && ny < N)
		{
			if(!visited[nx][ny] && maps[nx][ny] == 1)
			{
				DFS(nx, ny);
			}
		}
	}
}

int main()
{
	cin >> T;
	for(int tc = 0; tc < T; tc++)
	{
		int ans = 0;
		cin >> M  >> N >> K;
		for(int i = 0; i < K; i++)
		{
			int x, y;
			cin >> x >> y;
			maps[x][y] = 1;
		}
		
		for(int i = 0; i < M; i++)
		{
			for(int j = 0; j < N; j++)
			{
				if(!visited[i][j] && maps[i][j] == 1)
				{
					ans++;
					DFS(i, j);
				}
			}
		}
		
		cout << ans << endl;
		
		memset(maps, 0, sizeof(maps));
		memset(visited, false, sizeof(visited));
		
		
	}
}
