#include <iostream>

using namespace std;

int N, M, K;
bool visited[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int cnt = 0;
int maps[101][101];
void DFS(int x, int y)
{
	for(int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx >= 0 && ny >= 0 && nx < N && ny < M)
		{
			if(!visited[nx][ny] && maps[nx][ny] == 1)
			{
				visited[nx][ny] = true;
				cnt++;
				DFS(nx,ny);
			}
		}
	}
}

int main()
{
	int res = 0;
	cin >> N >> M >> K;
	
	for(int i = 0; i < K; i++)
	{
		int a, b;
		cin >> a >> b;
		maps[a-1][b-1] = 1;
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if(!visited[i][j] && maps[i][j] == 1)
			{
				cnt = 0;
				DFS(i, j);
				res = max(res, cnt);
			}
		}
	}
	
	cout << res << endl;
}
