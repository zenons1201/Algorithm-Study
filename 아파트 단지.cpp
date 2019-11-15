#include <iostream>
using namespace std;

int map[100][100];
bool visited[100][100];
int ans = 0;
int dx[4] = {1, -1, 0 ,0};
int dy[4] = {0, 0, 1, -1};
int N;
 
void DFS(int x, int y)
{
	visited[x][y] = true;
	
	for(int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >=0 && ny >= 0 && nx < N && ny < N)
		{
			if(!visited[nx][ny] && map[nx][ny] == 1)
			{
				map[nx][ny] = 2;
				DFS(nx, ny);
			}
		}
	}
}

int main()
{
	cin >> N; 
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(map[i][j] == 1)
			{
				DFS(i, j);
				ans++;
			}
		}
	}
	
	cout << ans << endl;
}
