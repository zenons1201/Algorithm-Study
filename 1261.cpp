#include <stdio.h>
#include <queue>
#include <memory.h>

using namespace std;
const int SIZE = 100;
int M, N;
int map[SIZE][SIZE];
int dist[SIZE][SIZE];

int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
int INF = 98765432;
int main()
{
	scanf("%d %d", &M, &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &map[i][j]);
			dist[i][j] = INF;
		}
	}

	queue <pair<int, int>> pq;
	pq.push(make_pair(0, 0));

	dist[0][0] = map[0][0];

	while (!pq.empty()) {

		int x = pq.front().first;
		int y = pq.front().second;

		pq.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < M && ny < N && nx >= 0 && ny >= 0) {
				if (dist[ny][nx] > dist[y][x] + map[ny][nx]) {
					dist[ny][nx] = dist[y][x] + map[ny][nx];
					pq.push(make_pair(nx, ny));
				}
			}
		}
	}

	printf("%d", dist[N - 1][M - 1]);
	return 0;
}

