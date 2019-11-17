#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N;
int maps[125][125], dist[125][125];
const int INF = 98765432;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int cnt = 1;
int main()
{
	while (cin >> N)
	{
		if (N == 0)
			break;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> maps[i][j];
				dist[i][j] = INF;
			}
		}

		priority_queue < pair<int, pair<int, int>>> pq;
		dist[0][0] = maps[0][0];
		pq.push(make_pair(maps[0][0], make_pair(0, 0)));

		while (!pq.empty())
		{
			int cost = pq.top().first;
			int x = pq.top().second.first;
			int y = pq.top().second.second;
			pq.pop();

			if (dist[x][y] != cost) continue;

			for (int i = 0; i < 4; i++)
			{
				int nx = x + dx[i];
				int ny = y + dy[i];

				if (nx >= 0 && ny >= 0 && nx < N && ny < N)
				{
					if (dist[nx][ny] > dist[x][y] + maps[nx][ny])
					{
						dist[nx][ny] = dist[x][y] + maps[nx][ny];
						pq.push(make_pair(dist[nx][ny], make_pair(nx, ny)));
					}
				}
			}
		}
		printf("Problem %d: %d\n", cnt, dist[N-1][N-1]);
		cnt++;
	}
	return 0;
}

