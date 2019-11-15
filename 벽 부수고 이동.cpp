#include <iostream>
#include <queue>
using namespace std;

int maps[1000][1000];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int, int>> q;
bool visited[1000][1000];
int ans = 0;

int main()
{
	int N, M;
	cin >> N >> M;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin >> maps[i][j];
			if(maps[i][j] == 0)
			{
				q.push(make_pair(i, j));
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
				if(!visited[nx][ny])
				{
					if(maps[nx][ny] == 0)
					{
						ans++;
						q.push(make_pair(nx, ny));
					}
				}
			}
		}
	}
	
	cout << ans << endl;
} 
