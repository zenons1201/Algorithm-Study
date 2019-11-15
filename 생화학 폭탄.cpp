#include <iostream>
#include <queue>

using namespace std;
int dx[4] = {1, -1, 0 , 0};
int dy[4] = {0, 0, 1, -1};
bool visited[100][100];
int maxs = 0;

int main()
{
	int map[100][100];
	queue <pair<int, int>> q;
	int m, n;
	int posX, posY;
	
	cin >> m >> n;
	
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}
	
	cin >> posX >> posY;
	q.push(make_pair(posX, posY));
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 4; j++)
			{
				int nx = x + dx[i];
				int ny = y + dy[i];
				
				if(nx > 0 && ny > 0 && nx <= m && ny <= n)
				{
					if(map[nx][ny] == 1)
					{
						map[nx][ny] = map[x][y] + 1;
						q.push(make_pair(nx, ny));
					}
					
					else
					{
						continue;
					}
				}
			}
		}
	}
	
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(maxs < map[i][j])
			{
				maxs = map[i][j];
			}
		}
	}
	
	cout << maxs << endl;
}
