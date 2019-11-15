#include <iostream>

using namespace std;

int R, C;
int d[50][50];
char maps[50][50];
bool visited[50][50];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int tx, ty;
int sx, sy;
queue<pair<int, int>> q;

void BFS()
{
	visited[tx][ty] = true;
	q.push(make_pair(tx, ty));
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		if(maps[x][y] == '*')
		{
			for(int i = 0; i < 4; i++)
			{
				int nx = x + dx[i];
				int ny = y + dy[i];
				if(nx > 0 && nx <= R && ny > 0 && ny <= C)
				{
					if(maps[nx][ny] != 'D' && maps[nx][ny] != 'X' && maps[nx][ny] != 'S' && !visited[nx][ny])
					{
						visited[nx][ny] = true;
						q.push(make_pair(nx, ny));
						maps[nx][ny] = '*';
					}
				}
			}
		}

		else if(maps[x][y] == '.' || maps[x][y] == 'S')
		{
			for(int i = 0; i < 4; i++)
			{
				int nx = x + dx[i];
				int ny = y + dy[i];
				if(nx > 0 && nx <= R && ny > 0 && ny <= C)
				{
					if(maps[nx][ny] != 'X' && maps[nx][ny] != '*' && !visited[nx][ny])
					{
						q.push(make_pair(nx, ny));
						visited[nx][ny] = true;
						d[nx][ny] = d[x][y] + 1;
						if(maps[nx][ny] == 'D')
						{
							x = sx, y = sy;
							return;
						}
					}
				}
			}
		}
	}
}
	
	int main()
	{
		cin >> R >> C;
		for(int i = 1; i <= R; i++)
		{
			for(int j = 1; j <= C; j++)
			{
				cin >> maps[i][j];
				if(maps[i][j] == 'S')
				{
					tx = i; ty = j;
				}
				
				else if(maps[i][j] == '*')
				{
					q.push(make_pair(i, j));
				}
			}
		}
		BFS();
		if(!cnt[sx][sy])
		{
			cout << "KAKTUS";
		}
		
		else
		{
			cout << cnt[sx]
		}
	}

