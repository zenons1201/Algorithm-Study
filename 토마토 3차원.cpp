#include<iostream>
#include<queue>
#include<cstring>
#include<cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int map[101][101][101] = {0,};
bool visited[101][101][101];
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
queue <pair<pair<int, int>, int>> q;
vector<int> v;
int M, N, H;
int ans = 0;
int main()
{
	cin >> M >> N >> H;
	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < N; j++)
		{
			for(int k = 0; k < H; k++)
			{
				cin >> map[i][j][k];
				if(map[i][j][k] == 1)
				{
					q.push(make_pair(make_pair(i,j), k));
				}
			}
		}
	}

	while(!q.empty())
	{
		int qs = q.size();
		ans++;
		for(int i = 0; i < qs; i++)
		{
		int x = q.front().first.first;
		int y = q.front().first.second;
		int z = q.front().second;
		q.pop();
	visited[x][y][z] = true;
		for(int i = 0; i < 6; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + dz[i];
			
			if(nx >= 0 && ny >= 0 && nz >= 0 && nx < M && ny < N && nz < H)
			{
				if(!visited[nx][ny][nz] && map[nx][ny][nz] == 0)
				{
				    visited[nx][ny][nz] = true;
					q.push(make_pair(make_pair(nx, ny), nz));
				}
            
			}
		}
		
		}
	}
	cout << ans << endl;
}
