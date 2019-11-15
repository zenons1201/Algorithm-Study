#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maps[100][100];
bool visited[100][100];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int N;
int ans = 0;
int sol = 0;
vector<int> v;

void DFS(int x, int y)
{
   visited[x][y] = true;
   ans++;
   for(int i = 0; i < 4; i++)
   {
   	 int nx = x + dx[i];
   	 int ny = y + dy[i];
   	 if(nx >= 0 && ny >= 0 && nx < N && ny < N)
   	 {
   	 	if(!visited[nx][ny] && maps[nx][ny] == 1)
   	 	{
			maps[nx][ny] = 2;
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
			scanf("%1d", &maps[i][j]);
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(maps[i][j] == 1)
			{
				ans = 0;
				DFS(i, j);
				v.push_back(ans);
			}
		}
	}
	sort(v.begin(), v.end());
	
	cout << v.size() << endl;
	for(int  i= 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}	
}
