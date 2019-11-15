#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
bool visited[501][501] = {false};
char maps[501][501];
int N;
int dx[2] = {1, 0};
int dy[2] = {0, 1};
char mola[4] = {'M', 'O', 'L', 'A'};
int cnt = 1;
void DFS(int x, int y)
{	
	for(int i = 0; i < 2; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		visited[x][y] = true;
		if(nx >= 1 && ny >= 1 && nx <= N && ny <= N)
		{
			if(!visited[nx][ny])
			{
				if(maps[nx][ny] == mola[cnt % 4])
				{
					cnt++;
					visited[nx][ny] = true;
					cout << maps[nx][ny] << endl;
					DFS(nx, ny);
					visited[nx][ny] = false;
				}
			}

		}
	}
}

int main()
{
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cin >> maps[i][j];
		}
	}
	
	DFS(1,1);
	sort(v.begin(), v. end());
	cout << v[v.size() - 1] << endl;
}
