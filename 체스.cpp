#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
queue <pair<int , int>> q;
bool visited[100][100] = {false};
int max_num = 0;
int ans = 0;
int maps[101][101] = {0,};
int main()
{
	int N, M;
	cin >> N >> M;
	int R, C, S, K;
	cin >> R >> C >> S >> K;
	q.push(make_pair(R, C));
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		visited[x][y] = true;
			
		if(x == S && y == K)
		{
			q.pop();
			break;
		}
		
		for(int i = 0; i < 8; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx >= 1 && ny >= 1 && nx <= N && ny <= M)
			{
				if(!visited[nx][ny])
				{
					maps[nx][ny] = maps[x][y] + 1;
					ans = maps[x][y];
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	cout << ans << endl;
	
}
