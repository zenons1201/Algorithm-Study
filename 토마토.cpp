#include <iostream>
#include <queue>

using namespace std;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int, int>> q;
int maps[1001][1001];
int board[1001][1001];

int main()
{
	int M, N;
	cin >> M >> N;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin >> maps[i][j];
			board[i][j] = -1;
			if(maps[i][j] == 1)
			{
				q.push(make_pair(i, j));
				board[i][j] = 0;
			}
		}
	}
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx >= 0 && ny >= 0 && nx < N && ny < M)
			{
				if(board[nx][ny] == -1 && maps[nx][ny] == 0)
				{
					board[nx][ny] = board[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	
	int ans = 0;
	bool flag = false;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			ans = max(ans, board[i][j]);
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if(maps[i][j] == 0 && board[i][j] == -1)
			{
				ans = -1;
			}
		}
	}
	
	cout << ans << endl;
}
